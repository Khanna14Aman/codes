#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<pair<int,int>>euler;
void lca(int node, int par, vector<int> adj[], int lev)
{
	euler.push_back({node,lev});
	for(auto it : adj[node])
	{
		if(it!=par)
		{
			lca(it,node,adj,lev+1);
			euler.push_back({node,lev});
		}
	}
	return;
}
signed main()
{
	int u,v,i,n;
	cout<<"\nenter no of node you wnat to enter\n";
	cin>>n;
	vector<int> adj[n+1];
	for(i=0;i<n-1;i++)
	{
		cout<<"\nenter value of node between which you want edge  ";
		cin>>u>>v;
		adj[u].emplace_back(v);
		adj[v].emplace_back(u);
	}
	int x,y,x1,y1;
	cout<<"\nenter value whose lca has to find\n";
	cin>>x>>y;
	lca(1,-1,adj,1);
	int z = euler.size();
	for(i=0;i<z;i++)
	{
		if(euler[i].first==x)
		{
			x1=i;
			break;
		}
	}
	for(i=0; i < z;i++)
	{
		if(euler[i].first==y)
		{
			y1=i;
			break;
		}
	}
	if(y1<x1)
		swap(x1,y1);//because if you give such a value in x which comes after y then your loop has to move in reverse order by which you get wrong answer
	int lowest = x1;
	for(i=x1+1;i<y1;i++)
	{
		if(euler[i].second<euler[lowest].second)
			lowest = i;
		else
			lowest = lowest;
	}
	cout<<"\n"<<euler[lowest].first;
	return 0;
}