//In this solution we are checking the possible places for placing queen in big o (1) time by using hashing ..
#include<iostream>
#include<vector>
using namespace std;
bool queen(int col,vector<vector<int>>&chess,int n,vector<int>&row,vector<int>&lower,vector<int>&upper)
{
	if(col==n)
	{
		for(auto i :chess)
		{
			for(auto j : i)
			{
				cout<<j<<" ";
			}
			cout<<"\n";
		}
		return true;
	}
	for(int x=0;x<n;x++)
	{
		if(row[x]==0 && lower[x+col]==0 && upper[(n-1)+(col-x)]==0)
		{
			chess[x][col]=1;
			row[x]=1;
			lower[x+col]=1;
			upper[(n-1)+(col-x)]=1;
			if(queen(col+1,chess,n,row,lower,upper)==true) return true;
			chess[x][col]=0;
			row[x]=0;
			lower[x+col]=0;
			upper[(n-1)+(col-x)]=0;
		}
	}
	return false;
}
int main()
{
	int n;
	cout<<"\nenter size of chess board\n";
	cin>>n;
	int b=2*n-1;
	vector<vector<int>>chess(n,vector<int>(n,0));
	vector<int>row(b,0);
	vector<int>lower(b,0);
	vector<int>upper(b,0);
	queen(0,chess,n,row,lower,upper);
	return 0;
}