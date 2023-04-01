#include <iostream>
#include<vector>
#define int long long
using namespace std;
bool a[100003];


signed main() {
	int i,j;
	for(i=0;i<=100000;i++)
	{
		a[i]=1;
	}
	for(i=2;i*i<=100000;i++)
	{
		if(a[i]==1)
		{
			for(j=i*i;j<=100000;j += i)
			{
				a[j]=0;
			}
		}
	}
	vector<int>v;
	for(i=2;i<=100000;i++)
	{
		if(a[i]==1)
		{
			v.emplace_back(i);
		}
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		int d[y-x+1];
		for(i=0;i<(y-x+1);i++)
		{
			d[i]=1;
		}
		for(auto p :v)
		{
			int first = (x/p)*p;
			if(first<x)
			{
				first += p;
			}
			if((p*p)>first)
			{
				first = p*p;
			}
			for(i=first;i<=y;i += p)
			{
				d[i-x]=0;
			} 
		}
		for(i=x;i<=y;i++)
		{
			if(d[i-x]==1)
			{
				printf("%d\n",i);
			}
		}
	}
	// your code goes here
	return 0;
}