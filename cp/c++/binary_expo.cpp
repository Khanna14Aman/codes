#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
void fibo(vector<vector<int>>base,int n)
{
	vector<vector<int>>ans ={{0,1},{1,0}};
	vector<vector<int>>temp(2,vector<int>(2,0));
	while(n!=0)
	{
		if(n&1)
		{
			temp[0][0] = ans[0][0]*base[0][0]+ans[0][1]*base[1][0];
			temp[0][1] = ans[0][0]*base[0][1]+ans[0][1]*base[1][1];
			temp[1][0] = ans[1][0]*base[0][0]+ans[1][1]*base[1][0];
			temp[1][1] = ans[1][0]*base[0][1]+ans[1][1]*base[1][1];
			ans = temp;
			n = n-1;
		}
		else
		{
			temp[0][0] = ans[0][0]*base[0][0]+ans[0][1]*base[1][0];
			temp[0][1] = ans[0][0]*base[0][1]+ans[0][1]*base[1][1];
			temp[1][0] = ans[1][0]*base[0][0]+ans[1][1]*base[1][0];
			temp[1][1] = ans[1][0]*base[0][1]+ans[1][1]*base[1][1];
			ans = temp;
			n = n/2;
		}
		cout<<ans[0][0]<<"\n";
	}
	

}
signed main()
{
	int n;
	cout<<"\nenter value of n\n";
	cin>>n;
	vector<vector<int>>base = {{1,1},{1,0}};
	fibo(base,n-1);
	return 0;
}