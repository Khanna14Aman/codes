#include<iostream>
#include<vector>
#include<map>
using namespace std;
void solve1(int ind, vector<int>&leftarr, int long sum, vector<int long>&leftsum, int w)
{
	if(ind==w)
	{
		leftsum.emplace_back(sum);
		return;
	}
	solve1(ind+1,leftarr,sum+leftarr[ind],leftsum,w);
	solve1(ind+1,leftarr,sum,leftsum,w);
}
void solve2(int ind, vector<int>&rightarr, int long sum, map<int long,int>&mppsum,int z)
{
	if(ind==z)
	{
		mppsum[sum]++;
		return;
	}
	solve2(ind+1,rightarr,sum+rightarr[ind],mppsum,z);
	solve2(ind+1,rightarr,sum,mppsum,z);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,x;
	cin>>n>>x;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int mid = n/2;
	vector<int>leftarr,rightarr;
	for(i=0;i<=mid;i++)
	{
		leftarr.emplace_back(a[i]);
	}
	for(i=mid+1;i<n;i++)
	{
		rightarr.emplace_back(a[i]);
	} 
	int w = leftarr.size();
	int z = rightarr.size();
	vector<int long>leftsum;
	map<int long,int>mppsum;
	solve1(0,leftarr,0,leftsum,w);
	solve2(0,rightarr,0,mppsum,z);
	int long long count=0;
	for(auto it : leftsum){
		count += mppsum[x-it];
	}
	cout<<count<<"\n";
	return 0;
}