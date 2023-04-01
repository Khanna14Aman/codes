#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);

#define int long long
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





struct node{
  int open,close,full;
  // node(int _open,int _close, int _full){
  //   open=_open;
  //   close=_close;
  //   full=_full;
  // }
};


// vector<node>seg(4*100004);
node seg[4*1000004];
string s;

void build(int ind,int low ,int high){
  if(low==high){
    // seg[ind] = node(s[low]=='(',s[low]==')',0);
    if(s[low]=='('){
      seg[ind].open=1;
      seg[ind].close=0;
    }
    else if(s[low]==')'){
      seg[ind].close=1;
      seg[ind].open=0;
    }
    seg[ind].full=0;
    return;
  }

  int mid = (low+high)>>1;
  build(2*ind+1,low,mid);
  build(2*ind+2,mid+1,high);

  seg[ind].open = seg[2*ind+2].open + seg[2*ind+1].open - min(seg[2*ind+1].open,seg[2*ind+2].close);
  seg[ind].close = seg[2*ind+1].close + seg[2*ind+2].close - min(seg[2*ind+1].open,seg[2*ind+2].close);
  seg[ind].full = seg[2*ind+1].full + seg[2*ind+2].full + min(seg[2*ind+1].open,seg[2*ind+2].close);


}




node query(int ind,int low,int high,int l,int r){
  if(low>=l && high<=r){
    return seg[ind];
  }

  if(low>r || high<l){
    node res ;
    res.open=0;
    res.close=0;
    res.full=0;
    return res;
  }

  int mid= (low+high)>>1;
  node left = query(2*ind+1,low,mid,l,r);
  node right = query(2*ind+2,mid+1,high,l,r);
  node ans;
  ans.open=left.open+right.open-min(left.open,right.close);
  ans.close=left.close+right.close-min(left.open,right.close);
  ans.full=left.full+right.full+min(left.open,right.close);
  return ans;
}



signed main()
{
  fio;
  init_code();
  // string s;
  cin>>s;
  int n=s.length();
  // vector<node>seg(4*n,node(0,0,0));
  build(0,0,n-1);
  int q;
  cin>>q;
  while(q--){
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    node ans = query(0,0,n-1,l,r);
    cout<<ans.full*2<<endl;
  }

  rtn 0;
}