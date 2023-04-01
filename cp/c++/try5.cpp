#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
void lca(int x, int y, int parent[][18], int level[])
{
    if(level[x]<level[y])//we always think that one of the element is down so that we need to compute only for one element and we get answer otherwise we need to calculate for both the element
        swap(x,y);
    int dist = level[x]-level[y],i;
    for(i=0;i<=log2(dist);i++)
    {
        if(dist&(1<<i))
        {
            x = parent[x][i];
        }
    }
    if(x==y)
    {
        cout<<"\n"<<x<<endl;
        return;
    }
    for(i=17;i>=0;i--)//jump from node if and only if parent of both node are not equal,we start from 17 not 0 because suppose we need 16 jump so it will never take 16 jump rather jumps wiil like (2^0+2^1+2^2+2^3+2^4....)jumps and we cross the lca node
    {
        if(parent[x][i]!=parent[y][i])
        {
            x = parent[x][i];
            y = parent[y][i];
        }
    }
    //cout<<"\n"<<parent[x][0]<<endl;// we do this because our program will always end just beneath of lca so parent of that node will always be lca
    return;
}
void dfs(int node, int par, vector<int> adj[], int parent[][18], int level[], int lev)
{
    level[node]=lev;
    parent[node][0]=par;
    int i;
    for(i=0;i<17;i++)
    {
        if(parent[node][i]>=0)
        {
            parent[node][i+1] = parent[parent[node][i]][i];
        }
    }
    for(auto it : adj[node])
    {
        if(it!=par)
        {
            dfs(it,node,adj,parent,level,lev+1);
        }
    }
    return;
}
signed main()
{
    int n,i,u,v,x,y;
    cout<<"\nenter no of node you wnat to enter\n";
    cin>>n;
    vector<int> adj[n+1];
    int parent[n+1][18]={0},level[n+1]={0};
    for(i=0;i<n-1;i++)
    {
        cout<<"\nenter node between which you want edge\n";
        cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    dfs(20,-1,adj,parent,level,1);
    for(i=0;i<17;i++)
    {
        cout<<parent[1][i+1]<<"\n";
    }
    cout<<"\nenter two node whose lca you want to find\n";
    cin>>x>>y;
    lca(x,y,parent,level);
    return 0;
}