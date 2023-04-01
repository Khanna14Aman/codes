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

#define sz(x) (x.size())
#define bg(x) x.begin()
#define ed(x) x.end()
#define all(x) bg(x),ed(x)
#define rall(x) x.rbegin(),x.rend()
#define sortas(x) sort(all(x))
#define sortds(x) sort(all(x),greater<int>())

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

void build(int ind,int low,int high,int arr[],int seg[]){
  if(low==high){
    seg[ind] = arr[low];
    return;
  }
  int mid = (low+high)/2;
  build(2*ind+1,low,mid,arr,seg);
  build(2*ind+2,mid+1,high,arr,seg);
  seg[ind] = seg[2*ind+1]+seg[2*ind+2];
}

void update(int ind,int low,int high,int l,int r,int seg[],int lazy[],int val){
  if(lazy[ind]!=0){
    seg[ind]+=(high-low+1)*lazy[ind];
    if(low!=high){
      lazy[2*ind+1]+=lazy[ind];
      lazy[2*ind+2]+=lazy[ind];
    }
    lazy[ind] = 0;
  }
  if(low>=l && high<=r){
    seg[ind]+=(high-low+1)*val;
    if(low!=high){
      lazy[2*ind+1]+=val;
      lazy[2*ind+2]+=val;
    }
    return;
  }
  if(low>r || high<l){
    return;
  }
  int mid = (low+high)/2;
  update(2*ind+1,low,mid,l,r,seg,lazy,val);
  update(2*ind+2,mid+1,high,l,r,seg,lazy,val);
  seg[ind] = seg[2*ind+1]+seg[2*ind+2];
}

int rangesum(int ind,int low,int high,int l,int r,int seg[],int lazy[]){
  if(lazy[ind]!=0){
    seg[ind]+=(high-low+1)*lazy[ind];
    if(low!=high){
      lazy[2*ind+1]+=lazy[ind];
      lazy[2*ind+2]+=lazy[ind];
    }
    lazy[ind] = 0;
  }
  if(low>=l&&high<=r){
    return seg[ind];
  }
  if(low>r || high<l){
    return 0;
  }
  int mid = (low+high)/2;
  int left = rangesum(2*ind+1,low,mid,l,r,seg,lazy);
  int right = rangesum(2*ind+2,mid+1,high,l,r,seg,lazy);
  return (left+right);
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
    int n;
    cin>>n;
    int arr[n];
    int seg[4*n]={0};
    int lazy[4*n] = {0};
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    build(0,0,n-1,arr,seg);
    int l,r;
    cin>>l>>r;
    cout<<rangesum(0,0,n-1,l,r,seg,lazy)<<endl;
    int val;
    cin>>val;
    update(0,0,n-1,l,r,seg,lazy,val);
    cout<<rangesum(0,0,n-1,l,r,seg,lazy)<<endl;
    cin>>val;
    update(0,0,n-1,l,r,seg,lazy,val);
    cout<<rangesum(0,0,n-1,l,r,seg,lazy)<<endl;
    return 0; 
} 
// check on this-->lazy propagation
// 10
// 1 2 3 4 9 6 7 8 9 10
// 4 8
// 1
// 2