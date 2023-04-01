#include<iostream>
#include<vector>
using namespace std;
int flag=0;   //If you will not use flag it will print all possible solution,but if you will use flag it will get over after printing one solution
bool possible(int row,int col,vector<vector<int>>&chess,int n)
{
	int dupr =row;
	int dupc =col;
	int i= dupr;
	int j= dupc;
	while(i>=0 && j>=0)
	{
		if(chess[i][j]==1)
			return false;

		i--;
		j--;
	}

	i=dupr;
	j=dupc;
	while(j>=0)
	{
		if(chess[i][j]==1)
			return false;

		j--;
	}
	i=dupr;
	j=dupc;
	while(j>=0 && i<n)
	{
		if(chess[i][j]==1)
			return false;

		i++;
		j--;
	}
	return true;
}
void queen(int col,vector<vector<int>>&chess,int n)
{
	if(flag==1)
		return;
	if(col==n)
	{
		flag=1;
		for(auto i :chess)
		{
			for(auto j : i)
			{
				cout<<j<<" ";
			}
			cout<<"\n";
		}
		return;
	}
	for(int row=0;row<n;row++)
	{
		if(possible(row,col,chess,n))
		{
			chess[row][col]=1;
			queen(col+1,chess,n);
			chess[row][col]=0;
		}
	}
}
int main()
{
	int n;
	cout<<"\nenter size of chess board\n";
	cin>>n;
	vector<vector<int>>chess(n,vector<int>(n,0));
	queen(0,chess,n);
	return 0;
}