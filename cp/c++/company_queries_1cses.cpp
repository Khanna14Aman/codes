#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(int node, int par, vector<int> adj[], int parent[][18],int level[], int lev)//in 2d array we need to give limit of second index
{
    level[node] = lev;  // we need level array to check whether k level of any node is exist or not
    parent[node][0] = par;
    int i;
    for(i=0;i<17;i++)//if you do <18 then it will give sigmentation fault because then it will calculate for parent[node][18] which is not exist
    {
        if(parent[node][i]>=0)//as parent of 1 node is -1 so without this it will give sigmentation fault
        {
            parent[node][i+1] = parent[parent[node][i]][i];//for this see video recording or in copy notes
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
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> adj[n+1];
    int parent[n+1][18]={0},i,pari,level[n+1]={0};   //if not initialise with zero then while making parent array it will give segmentation fault because of garbage value will be use as index value
    for(i=2;i<=n;i++)//pari will be parent for every i node 
    {
        cin>>pari;
        adj[pari].emplace_back(i);
        adj[i].emplace_back(pari);
    }
    dfs(1,-1,adj,parent,level,1);//precomputation for parent array to be safe from tle.
    while(q--)
    {
        int x,k;
        cin>>x>>k;
        if(level[x]-k <=0)
        {
            cout<<"-1\n";
        }
        else
        {
            for(i=0;i<=log2(k);i++)
            {
                if(k&(1<<i))
                {
                    x = parent[x][i];
                }
            }
            cout<<x<<"\n";
        }
    }
    return 0;
}
