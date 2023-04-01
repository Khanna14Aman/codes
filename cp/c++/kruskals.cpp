#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);

#define int long long
#define l long
#define db long double
#define str string

#define pi pair<int,int>
#define pd pair<db,db>
#define ps pair<str,str>

#define vi vector<int>
#define vs vector<str>
#define vb vector<bool>
#define vd vector<db>
#define vpi vector<pi>
#define vpd vector<pd>
#define vps vector<ps>

#define mp make_pair
#define f first
#define s second

#define sz(x) (x.size())
#define bg(x) x.begin()
#define ed(x) x.end()
#define all(x) bg(x),ed(x)
#define rall(x) x.rbegin(),x.rend()
#define sor(x) sort(all(x))
#define sord(x) sort(all(x),greater<int>())
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front
#define rtn return

#define lb lower_bound
#define ub upper_bound
#define bs binary_search


#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define for1_(i,n) for(int i=1;i<n;i++)
#define rof0(i,n) for(int i=n;i>=0;i--)
#define rof1(i,n) for(int i=n;i>=1;i--)
#define rof0_(i,n) for(int i=n-1;i>=0;i--)
#define rof1_(i,n) for(int i=n-1;i>=1;i--)
#define forin(i,j,a,n,m) for(int i=0;i<n;i++) for(int j =0;j<m;j++) cin>>a[i][j]
#define foru(it,j) for(auto it : j)
#define w(x) while(x--)
#define wtc(t) int t;cin>>t;while(t--)

int dx4[] = {-1,0,1,0};
int dy4[] = {0,1,0,-1};
int dx8[] = {-1,-1,0,1,1,1,0,-1};
int dy8[] = {0,1,1,1,0,-1,-1,-1};

const int mod = 1e9+7;
const int infl = 1e18+5;
const int inf = 2e5+5;

#define minpqint priority_queue<int, vi, greater<int>>
#define minpqpi priority_queue<pi,vpi,greater<pi>>
#define maxpqint priority_queue<int>
#define maxpqpi priority_queue<pi> 



void init_code() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}



int find_par(int parent[],int n){
  if(parent[n]==n)return n;
  return parent[n]=find_par(parent,parent[n]);
}

void union_by_rank(int parent[],int rank[],int u,int v){
  u = find_par(parent,u);
  v = find_par(parent,v);
  if(u==v)return;

  if(rank[u]<rank[v]){
    parent[v]=u;
  }
  else if(rank[v]<rank[u]){
    parent[u]=v;
  }
  else{
    parent[u]=v;
    rank[u]++;
  }
}

void kruskals(){
  int n;
  cin>>n;
  int m;
  cin>>m;
  vector<pair<int,pair<int,int>>>edges;
  for(int i=1;i<=m;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    edges.push_back({wt,{u,v}});
  }

  sort(edges.begin(),edges.end());
  int mincost=0;
  int parent[n+1];
  int rank[n+1];
  for(int i=0;i<=n;i++){
    rank[i]=0;
    parent[i]=i;
  }
  for(auto it:edges){
    int u = it.second.first;
    int v = it.second.second;
    int wt = it.first;
    if(find_par(parent,u)!=find_par(parent,v)){
      union_by_rank(parent,rank,u,v);
      mincost+=wt;
    }
  }
  cout<<mincost<<endl;

}

signed main()
{
  fio;
  init_code();
  kruskals();
  rtn 0;
}
