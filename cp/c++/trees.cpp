#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
void eulertour(int node, int par, vector<int> adj[])
{
	cout<<node<<" ";
	for(auto it : adj[node])
	{
		if(it!=par)
		{
			eulertour(it,node,adj);
			cout<<node<<" ";
		}
	}
	return;
}
void subtreesize(int node, int par, vector<int> adj[], int subtree[])
{
	subtree[node] = 1;
	for(auto it : adj[node])
	{
		if(it!=par)
		{
			subtreesize(it,node,adj,subtree);
			subtree[node] += subtree[it];
		}
	}
	return;
}
void dfsmax(int node , int par, vector<int> adj[], int lev, int &maxi)
{
	int level = lev;
	maxi = max(maxi,level);
	for(auto it : adj[node])
	{
		if(it!=par)
		{
			dfsmax(it,node,adj,lev+1,maxi);
		}
	}
	return; 
}
void bfs(int node, int par, vector<int> adj[])
{
	cout<<"\nbfs traversel is  ";
	queue<pair<int,int>>q;
	q.push({node,par});
	while(!q.empty())
	{
		node = q.front().first;
		par = q.front().second;
		q.pop();
		cout<<node<<" ";
		for(auto it : adj[node])
		{
			if(it!=par)
			{
				q.push({it,node});
			}
		}
	}
	return;
}
void dfs(int node , int par, vector<int> adj[])
{
	cout<<node<<" ";
	for(auto it : adj[node])
	{
		if(it!=par)
		{
			dfs(it,node,adj);
		}
	}
	return; 
}
void maxlevel(int node, int par, vector<int> adj[])
{
	int maxi = 0;
	dfsmax(node,par,adj,1,maxi);
	cout<<"max level is  "<<maxi;
	return ;
}
signed main()
{
	int n;
	cout<<"\nenter no of node you want to enter\n";
	cin>>n;
	int i,u,v;
	vector<int> adj[n+1];
	for(i=0;i<n-1;i++)
	{
		cout<<"\nbetween which node you want an edge\n";
		cin>>u>>v;
		adj[u].emplace_back(v);
		adj[v].emplace_back(u);
	}
	int subtree[n+1] = {0};
	cout<<"dfs travesel is  ";
	dfs(1,-1,adj);
	bfs(1,-1,adj);
	maxlevel(1,-1,adj);
	subtreesize(1,-1,adj,subtree);
	cout<<"\nsubtree size is    ";
	for(i=1;i<=n;i++)
		cout<<"\nsize of subtree "<<i<<"is "<<subtree[i]<<" ";
	cout<<"\neuler tour is \n";
	eulertour(1,-1,adj);

	return 0;
}
