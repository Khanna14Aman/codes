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



void counting(int a[],int b[],int maxi,int n){
  int c[maxi+1];
  for(int i=0;i<=maxi;i++){
    c[i]=0;
  }
  for(int i=1;i<=n;i++){
    c[a[i]]++;
  }

  for(int i=1;i<=maxi;i++){
    c[i]=c[i]+c[i-1];
  }

  for(int i=n;i>=1;i--){
    b[c[a[i]]]=a[i];
    c[a[i]]--;
  }
  for(int i=1;i<=n;i++){
    cout<<b[i]<<" ";

  }

  // cout<<"\nvalue of final array c will be\n";
  // for(int i=0;i<=maxi;i++){
  //   cout<<c[i]<<" ";
  // }
}



signed main()
{
  fio;
  init_code();
  int n;
  cin>>n;
  int a[n+1];
  int maxi = INT_MIN;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    maxi = max(maxi,a[i]);
  }

  int b[n+1];
  counting(a,b,maxi,n);

  rtn 0;
}
