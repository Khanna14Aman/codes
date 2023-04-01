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








void buildmax(int ind,int low,int high,int a[],vector<int>&seg){
  if(low==high){
    seg[ind]=a[low];
    return;
  }
  int mid = (low+high)>>1;
  buildmax(2*ind+1,low,mid,a,seg);
  buildmax(2*ind+2,mid+1,high,a,seg);
  seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}





void updatemax(int ind,int low ,int high,vector<int>&seg,int a[],int i,int val){
  if(low==high){
    seg[ind]+=val;
    a[i]+=val;
    return;
  }
  int mid = (low+high)>>1;
  if(i<=mid){
    updatemax(2*ind+1,low,mid,seg,a,i,val);
  }
  else if(i>mid){
    updatemax(2*ind+2,mid+1,high,seg,a,i,val);
  }
  seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}






int rangemax(int ind,int low,int high,int l,int r,vector<int>&seg){
  if(low>=l && high<=r){
    return seg[ind];
  }

  if(low>r || high<l){
    return INT_MIN;
  }

  int mid = (low+high)>>1;
  int left = rangemax(2*ind+1,low,mid,l,r,seg);
  int right = rangemax(2*ind+2,mid+1,high,l,r,seg);
  return max(left,right);
}












void buildmin(int ind,int low,int high,int a[],vector<int>&seg){
  if(low==high){
    seg[ind]=a[low];
    return;
  }
  int mid = (low+high)>>1;
  buildmin(2*ind+1,low,mid,a,seg);
  buildmin(2*ind+2,mid+1,high,a,seg);
  seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
}





void updatemin(int ind,int low ,int high,vector<int>&seg,int a[],int i,int val){
  if(low==high){
    seg[ind]+=val;
    a[i]+=val;
    return;
  }
  int mid = (low+high)>>1;
  if(i<=mid){
    updatemin(2*ind+1,low,mid,seg,a,i,val);
  }
  else if(i>mid){
    updatemin(2*ind+2,mid+1,high,seg,a,i,val);
  }
  seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
}






int rangemin(int ind,int low,int high,int l,int r,vector<int>&seg){
  if(low>=l && high<=r){
    return seg[ind];
  }

  if(low>r || high<l){
    return INT_MAX;
  }

  int mid = (low+high)>>1;
  int left = rangemin(2*ind+1,low,mid,l,r,seg);
  int right = rangemin(2*ind+2,mid+1,high,l,r,seg);
  return min(left,right);
}





void build(int ind,int low,int high,int a[],vector<int>&seg){
  if(low==high){
    seg[ind]=a[low];
    return;
  }
  int mid = (low+high)>>1;
  build(2*ind+1,low,mid,a,seg);
  build(2*ind+2,mid+1,high,a,seg);
  seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}



int rangesum(int ind,int low,int high,int l,int r,vector<int>&seg){
  if(low>=l && high<=r){
    return seg[ind];
  }

  if(low>r || high<l){
    return 0;
  }

  int mid = (low+high)>>1;
  int left = rangesum(2*ind+1,low,mid,l,r,seg);
  int right = rangesum(2*ind+2,mid+1,high,l,r,seg);
  return left+right;
}
void update(int ind,int low ,int high,vector<int>&seg,int a[],int i,int val){
  if(low==high){
    seg[ind]+=val;
    a[i]+=val;
    return;
  }
  int mid = (low+high)>>1;
  if(i<=mid){
    update(2*ind+1,low,mid,seg,a,i,val);
  }
  else if(i>mid){
    update(2*ind+2,mid+1,high,seg,a,i,val);
  }
  seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}



signed main()
{
  fio;
  init_code();
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  vector<int>segmin(4*n,0);
  vector<int>seg(4*n,0);
  vector<int>segmax(4*n,0);
  build(0,0,n-1,a,seg);
  buildmin(0,0,n-1,a,segmin);
  buildmax(0,0,n-1,a,segmax);
  int q;
  cin>>q;
  while(q--){
    int l,r;
    cin>>l>>r;
    int sum = rangesum(0,0,n-1,l,r,seg);
    int mini = rangemin(0,0,n-1,l,r,segmin);
    int maxi = rangemax(0,0,n-1,l,r,segmax);
    cout<<sum<<" "<<mini<<" "<<maxi<<endl;
  }
  cin>>q;
  while(q--){
    int i,val;
    cin>>i>>val;
    update(0,0,n-1,seg,a,i,val);
    updatemin(0,0,n-1,segmin,a,i,val);
    updatemax(0,0,n-1,segmax,a,i,val);
  }
  cin>>q;
  while(q--){
    int l,r;
    cin>>l>>r;
    int sum = rangesum(0,0,n-1,l,r,seg);
    int mini = rangemin(0,0,n-1,l,r,segmin);
    int maxi = rangemax(0,0,n-1,l,r,segmax);    
    cout<<sum<<" "<<mini<<" "<<maxi<<endl;
  }
  rtn 0;
}