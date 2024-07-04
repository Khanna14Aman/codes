#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Position {
    int row, col;
    Position(int r, int c){
      row = r;
      col = c;
    }
};

bool isValid(int row, int col, int N, int M, vector<vector<bool>>& inactive) {
    return (row >= 0 && row < N && col >= 0 && col < M && !inactive[row][col]);
}

Position fun(int horseRow,int horseCol,int bishopRow,int bishopCol,vector<vector<bool>>&inactive,int N,int M){
  if(horseRow==bishopRow && horseCol==bishopCol){
    return Position(horseRow,horseCol);
  }

  if(((horseCol+horseRow)%2)==((bishopRow+bishopCol)%2)){
    return Position(horseRow,horseCol);
  }

  vector<vector<int>>vis(N,vector<int>(M,0));
  
  // Possible moves for the horse
  vector<pair<int, int>> horseMoves = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
  queue<Position>q;
  q.push(Position(horseRow,horseCol));
  vis[horseRow][horseCol] = 1;

  while(!q.empty()){
    Position curr = q.front();
    q.pop();
    for(auto &ind:horseMoves){
      int newRow = curr.row + ind.first;
      int newCol = curr.col + ind.second;
      if(isValid(newRow,newCol,N,M,inactive) && !vis[newRow][newCol]){
        if(((newRow+newCol)%2)==((bishopRow+bishopCol)%2)){
          return Position(newRow,newCol);
        }
        q.push(Position(newRow,newCol));
      }
    }
  }
  return Position(-1,-1);
}

int main(){
	int N = 8, M = 8;  // Grid size
    int horseRow = 3, horseCol = 0;
    int bishopRow = 3, bishopCol = 2;

    // Mark inactive positions
    vector<vector<bool>> inactive(N, vector<bool>(M, false));
    inactive[0][3] = true;
    inactive[2][0] = true;

    Position ans = fun(horseRow,horseCol,bishopRow,bishopCol,inactive,N,M);

    if(ans.row!=-1 && ans.col!=-1){
      cout<<"Position where Horse and Bishop meet is at : "<<ans.row<<" , "<<ans.col<<endl;
    }
    else{
      cout<<"They cannot meet at any position"<<endl;
    }
    return 0;
}