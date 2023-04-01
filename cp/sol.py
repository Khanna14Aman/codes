res=[]
n=int(input())
web=[[0 for i in range(n)] for j in range(n)]

def display():
  if len(res)==0:
      print(-1,end="")
  else:
      print(min(res),end="")
      
def webpage(m,q3,cout,B):
    for i in range(n):
        if web[m][i]==1:
            if i==B:
                res.append(cout+1)
            web[m][i]=0
            webpage(i,q3,cout+1,B)
            web[m][i]=1
            
def mainInit():
  for i in range(n):
    q3=list(map(int,input().split()))
    for j in q3:
      web[i][j-1]=1
  
  A,B=map(int,input().split())
  webpage(A-1,web,0,B-1)
  display()

mainInit()





#include <sstream>
#include<bits/stdc++.h>
#include <ctime>
using namespace std;

#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);

#define int long long
#define db long double

#define pi pair<int,int>
#define pd pair<db,db>
#define ps pair<string,string>

#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vd vector<db>
#define vpi vector<pi>
#define vpd vector<pd>
#define vps vector<ps> 

#define mp make_pair
#define ff first
#define ss second

#define sz(x) (x.size())
#define bg(x) x.begin()
#define ed(x) x.end()
#define all(x) bg(x),ed(x)
#define rall(x) x.rbegin(),x.rend()
#define sor(x) sort(all(x))
#define sord(x) sort(all(x),greater<int>())
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front
#define rtn return

#define lb lower_bound
#define ub upper_bound
#define bs binary_search

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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
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

const int mod = 1e9+7;
const int modl = 1e18;
const int inf = 1e9+7;
const int infn = -1e9+7;

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int power(int base,int n,int mod) {int ans =  1; while(n>0){if(n%2==0){n/=2;base = mod_mul(base,base,mod);}else{ans = mod_mul(ans,base,mod); n--;}} return ans;}
   
void bfs(int node,vector<pair<int,int>>adj[],int n,vector<int>&vis,int end,vector<int>&dist)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push({0,node});
    while(!pq.empty())
    {
        int d = pq.top().first;
        node = pq.top().second;
        pq.pop();
        if(vis[node]==1)continue;
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it.first])
            {
                if(d+it.second<dist[it.first])
                {
                    dist[it.first]=d+it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
    }
    if(dist[end]!=100002){
        cout<<dist[end]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return;
}

signed main()
{
  fio;
  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
  #endif
    srand(time(NULL));
    // int n;
    // cin>>n;
    // vector<pair<int,int>>adj[n+1];
    // vector<string>s(n+1);
    // for(int i=1;i<=n;i++){
    //     string ans = "";
    //     while(1){
    //         char z;
    //         cin>>z;
    //         ans+=z;
    //         if(cin. peek()=='\n')break;
    //     }
    //     int len = ans.length();
    //     for(int j=0;j<len;j++){
    //         if(ans[j]!=' '){
    //             adj[i].push_back({ans[j]-'0',1});
    //         }
    //     }
    // }
    // vector<int>dist(n+1,100002);
    // vector<int>vis(n+1,0);
    // int start,end;
    // cin>>start>>end;
    // dist[start] = 0;
    // bfs(start,adj,n,vis,end,dist);
            int n,m;
    cin>>n>>m;
    string start;
    cin>>start;
    vector<vector<int>>mat(n,vector<int>(n));
    vector<pair<pair<int,int>,int>>v(n);
    for(int i=0;i<n;i++){
        string cord;
        cin>>cord;
        int val;
        cin>>val;
        v[i].first.first = cord[0]-'0';
        v[i].first.second = cord[2]-'0';
        v[i].second = val;
    }
    string path = "";
    while(1){
        char ch;
        cin>>ch;
        if(ch=='Q')break;
        path+=ch;
    }
    mat[0][0]=0;
    for(int i=0;i<n;i++){
        mat[v[i].first.first][v[i].first.second] = v[i].second;
    }
    vector<vector<int>>temp = mat;
    int sum = 0;
    int newi = 0,newj = 0;
    for(int i=0;i<path.length();i++){
        if(path[i]=='R'){
            if(newj+1>=n){
                sum-=1;
                break;
            }
            newj+=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=1;
        }
        else if(path[i]=='L'){
            if((newj-1)<0){
                sum-=1;
                break;
            }
            newj-=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=1;
        }
        else if(path[i]=='U'){
            if((newi-1)<0){
                break;
            }
            newi-=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=2;
        }
        else{
            if((newi+1)>=n){
                break;
            }
            newi+=1;
            if(mat[newi][newj]!=0){
                sum+=mat[newi][newj];
                mat[newi][newj]=0;
            }
            sum-=2;
        }
    }
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=0){
                flag = 1;
                break;
            }
        }
        if(flag)break;
    }
    if(flag==0){
        cout<<"      ***Mission Passed!***\n";
        cout<<"You have collected maximum points : "<<sum;
    }
    else{
        int lasti=0,lastj=0;
        int total = 0;
        int start = 0;
        int end = n;
        for(int i=0;i<n;i++){
            if(start==0){
            for(int j=start;j<end;j++){
                if(temp[i][j]!=0){
                    total+=temp[i][j];
                    total -= (abs(i-lasti)*2);
                    total -= (abs(lastj-j));
                    lasti = i;
                    lastj = j;
                }
                start = n-1;
            }
        }
        else{
            for(int j=start;j>=0;j--){
                if(temp[i][j]!=0){
                    total+=temp[i][j];
                    total -= (abs(i-lasti)*2);
                    total -= (abs(lastj-j));
                    lasti = i;
                    lastj = j;
                }
                start = 0;
            }
        }
        }
        cout<<"        ***Mission failed!***\n";
        cout<<"The maximum points can be collected : "<<total;
    }
  return 0;
}