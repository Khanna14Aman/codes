#include <sstream>
#include<bits/stdc++.h>
#include <ctime>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>pbds;  // *variable.find_by_order(value) => will give value at that index
typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_update>pbdsgreater; // variable.order_of_key(value) => total no of element less than value
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>pbdsmultiset;  // *variable.lower_bound(value) , *variable.upper_bound(value)

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);

#define int long long
#define db long double

#define minpqint priority_queue<int, vi, greater<int>>
#define minpqpi priority_queue<pi,vpi,greater<pi>>
#define maxpqint priority_queue<int>
#define maxpqpi priority_queue<pi> 

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(int a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(string a){cerr<<a;}
void _print(bool a){cerr<<a;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template<class T> void _print(vector<T> v){cerr<<"[";for(T i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<class T> void _print(set<T> s){cerr<<"[";for(T i:s){_print(i);cerr<<" ";}cerr<<"]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int dx4[] = {-1,0,1,0};
int dy4[] = {0,1,0,-1};
// int dx4[] = {0, 1, 0, -1};// acc to question west->south->east->north 
// int dy4[] = {-1, 0, 1, 0};// acc to question west->south->east->north
// int change[] = {2,3,0,1};// acc to question west->south->east->north
int dx8[] = {-1,-1,0,1,1,1,0,-1};
int dy8[] = {0,1,1,1,0,-1,-1,-1};
string dir = "URDL";

const int mod = 1e9+7;;
const int modl = 1e18;
const int inf = 1e9+7;
const int infn = -1e9+7;

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int power(int base,int n,int mod) {int ans =  1; while(n>0){if(n%2==0){n/=2;base = mod_mul(base,base,mod);}else{ans = mod_mul(ans,base,mod); n--;}} return ans;}

void dfs(int node,int par,vector<int>adj[],vector<int>&vis,vector<int>&low,vector<int>&ti,int time){
  vis[node] = 1;
  low[node]=ti[node] = time++;
  int child = 0;
  for(auto it:adj[node]){
    if(it==par)continue;
    if(!vis[it]){
      child++;
      dfs(it,node,adj,vis,low,ti,time);
      low[node] = min(low[node],low[it]);
      if(low[it]>=ti[node] && par!=-1){
        cout<<node<<endl;
      }
    }
    else{
      low[node] = min(low[node],ti[it]);
    }
  }
  if(par==-1 && child>1){
    cout<<node<<endl;
  }
}

signed main()
{
  fio;
  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);  
  #endif
    // try to use map,set instead of unordered_map,set in cf....
    srand(time(NULL));
    int n;
    cin>>n;
    vector<int>adj[n+1];
    for(int i=0;i<14;i++){
      int a,b;
      cin>>a>>b;
      adj[a].emplace_back(b);
      adj[b].emplace_back(a);
    }
    vector<int>low(n+1,0),ti(n+1,0),vis(n+1,0);
    dfs(1,-1,adj,vis,low,ti,1);
    debug(low)
    debug(ti)
  return 0;
}