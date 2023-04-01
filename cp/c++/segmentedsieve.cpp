#include <sstream>
#include<bits/stdc++.h>
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
int dx8[] = {-1,-1,0,1,1,1,0,-1};
int dy8[] = {0,1,1,1,0,-1,-1,-1};
string dir = "URDL";

const int mod = 1e9+7;
const int infl = 1e18;
const int inf = 1e9+7;

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int power(int base,int n,int mod) {int ans =  1; while(n>0){if(n%2==0){n/=2;base = mod_mul(base,base,mod);}else{ans = mod_mul(ans,base,mod); n--;}} return ans;}
int l,r;
vector<int>sieve(1000001,1);
void prime(){
    for(int i=2;i*i<=l;i++){
        if(sieve[i]){
            for(int j=i*i;j<=l;j+=i){
                sieve[j]=0;
            }
        }
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
    cin>>l>>r;
    prime();
    if(r<1000000){
        int ans=-1;
        for(int i=r;i>l;i--){
            if(sieve[i]==1){
                ans = i;
                break;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    vector<int>prime;
    for(int i=2;i*i<=r;i++){
        if(sieve[i]){
            prime.emplace_back(i);
        }
    }
    vector<int>dummy(r-l+1,1);
    for(auto pr:prime){
        int firstmultiple = (l/pr)*pr;
        if(firstmultiple<l)firstmultiple+=pr;
        if(pr*pr>firstmultiple)firstmultiple = pr*pr;
        for(int i=firstmultiple;i<=r;i+=pr){
            dummy[i-l] = 0;
        }
    }
    int ans;
    for(int i=r;i>l;i--){
        if(dummy[i-l]==1){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
  rtn 0;
}