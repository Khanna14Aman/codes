#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
void lca(int x, int y, int pari[])//function which find lca of any two number using parent information
{
    vector<int> v1,v2;
    while(y!=-1)//finding path from node y to root node means path y==>1(root node)
    {
        v1.emplace_back(y);
        y = pari[y];
    }
    while(x!=-1)//finding path from node x to root node means path x==>1(root node)
    {
        v2.emplace_back(x);
        x = pari[x];
    }
    reverse(v1.begin(),v1.end());//reversing path from y==>1 to 1==>y
    reverse(v2.begin(),v2.end());//reversing path from x==>1 to 1==>x
    int i,mini = min(v1.size(),v2.size());
    for(i = 0 ;i<mini;i++)
    {
        if(v1[i]!=v2[i])//last node from where path of both x and y node will get distinct will be our lca
            break;
    }
    i--;
    cout<<"\n"<<v1[i];
    return;
}
void parent(int node, int par, vector<int> adj[], int pari[])//function which keep parent of every node.
{
    pari[node] = par;
    for(auto it : adj[node])
    {
        if(it!=par)
        {
            parent(it,node,adj,pari);
        }
    }
}
signed main()
{
    int n;
    cout<<"\nenter no of node yoyu whant to enter \n";
    cin>>n;
    vector<int> adj[n+1];
    int u,v,i;
    for(i=0;i<n-1;i++)//inserting node in tree
    {
        cout<<"\nenter node between which you want an edge\n";
        cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int pari[n+1]={0};
    parent(1,-1,adj,pari);
    int x,y;
    cout<<"\nenter value of two node whose lca you want to find\n";
    cin>>x>>y;
    lca(x,y,pari);
    return 0;
}