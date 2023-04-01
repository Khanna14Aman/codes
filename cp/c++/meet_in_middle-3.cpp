#include<iostream>
#include<vector>
#include<map>
#define unsigned long long   long long
using namespace std;

void solve2(long long ind,long long s, vector<long long>&arr, long long sum, map<long long,long long>&mpp,long long z)
{
    if(sum>s)
    {
        return;
    }
	if(ind==z)
	{
		mpp[sum]++;
		return;
	}
	solve2(ind+1,s,arr,sum+arr[ind],mpp,z);
	solve2(ind+1,s,arr,sum,mpp,z);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long n,s;
	cin>>n>>s;
	long long a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	long long mid = n/2;
	vector<long long>leftarr,rightarr;
	for(i=0;i<=mid;i++)
	{
		leftarr.emplace_back(a[i]);
	}
	for(i=mid+1;i<n;i++)
	{
		rightarr.emplace_back(a[i]);
	} 
	map<long long,long long>mpp1;
	map<long long,long long>mppsum;
	solve2(0,s,leftarr,0,mpp1,leftarr.size());
	solve2(0,s,rightarr,0,mppsum,rightarr.size());
	long long count=0;
	for(auto it : mpp1){
		count += (it.second*mppsum[s-it.first]);
	}
	cout<<count<<"\n";
	return 0;
}