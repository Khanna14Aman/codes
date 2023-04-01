//This solution will print only one possible path and after that it will finish.
//This solution is to print string of all the path traverse by rat in moving from start to last;
//1 means we cant go there and 0 means we can go there.

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
string s = "URDL";
void maze(int i, int j, string move, vector<vector<int>>&vis,int n)//here we use "&" in recieving vector vis so that is why it will be updated all the time that is why when one path get it will finish computing for other path. 
{
	if(i==(n-1) && j==(n-1))
	{
		cout<<"\n"<<move<<endl;
		return;
	}
	for(int ind=0;ind<4;ind++)
	{
		int newi = i + dx[ind];
		int newj = j + dy[ind];

		if(newi >= 0 && newj >= 0 && newi < n && newj < n && vis[newi][newj]==0)
		{
			vis[i][j]=1;
			maze(newi,newj,move+s[ind],vis,n);
			vis[i][j]=0;
		}
	}
}
int main()
{
	int n;
	cout<<"\nenter size of maze\n";
	cin>>n;
	vector<vector<int>>vis(n,vector<int>(n,0));
	int i,j;
	cout<<"\nenter path 0 or 1 ;;; 1 means blocked and 0 means we can move\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>vis[i][j];
		}
	}
	string move = "";
	maze(0,0,move,vis,n);
	return 0;
}