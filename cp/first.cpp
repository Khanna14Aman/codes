#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
        int n,m;
    cin>>n>>m;
    string start;
    cin>>start;
    vector<vector<int>>mat(n,vector<int>(n));
    vector<pair<pair<int,int>,int>>v(n);
    for(int i=0;i<n;i++){
        string cord;
        cin>>cord;
        int val;
        cin>>val;
        v[i].first.first = cord[0]-'0';
        v[i].first.second = cord[2]-'0';
        v[i].second = val;
    }
    string path = "";
    while(1){
        char ch;
        cin>>ch;
        if(ch=='Q')break;
        path+=ch;
    }
    mat[0][0]=0;
    for(int i=0;i<n;i++){
        mat[v[i].first.first][v[i].first.second] = v[i].second;
    }
    vector<vector<int>>temp = mat;
    int sum = 0;
    int newi = 0,newj = 0;
    for(int i=0;i<path.length();i++){
        if(path[i]=='R'){
            if(newj+1>=n){
                sum-=1;
                break;
            }
            newj+=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=1;
        }
        else if(path[i]=='L'){
            if((newj-1)<0){
                sum-=1;
                break;
            }
            newj-=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=1;
        }
        else if(path[i]=='U'){
            if((newi-1)<0){
                break;
            }
            newi-=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=2;
        }
        else{
            if((newi+1)>=n){
                break;
            }
            newi+=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=2;
        }
    }
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=0){
                flag = 1;
                break;
            }
        }
        if(flag)break;
    }
    if(flag==0){
        cout<<"***Mission Passed!***\n";
        cout<<"You have collected maximum points : "<<sum<<endl;
    }
    else{
        int lasti=0,lastj=0;
        int total = 0;
        int start = 0;
        int end = n;
        for(int i=0;i<n;i++){
            if(start==0){
            for(int j=;start<end;j++){
                if(temp[i][j]!=0){
                    total+=temp[i][j];
                    total -= (abs(i-lasti)*2);
                    total -= (abs(lastj-j));
                    lasti = i;
                    lastj = j;
                }
                start = n-1;
            }
        }
        else{
            for(int j=start;j>=0;j--){
                if(temp[i][j]!=0){
                    total+=temp[i][j];
                    total -= (abs(i-lasti)*2);
                    total -= (abs(lastj-j));
                    lasti = i;
                    lastj = j;
                }
                start = 0;
            }
        }
        }
        cout<<"***Mission failed!***\n";
        cout<<"The maximum points can be collected : "<<total<<endl;
    }
    return 0;
}
