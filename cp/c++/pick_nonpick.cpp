#include<iostream>   //using vector is optional no need to use this .
#include<vector>
using namespace std;
void pick_non_pick(int n, int a[],int ind, int sum, int &count,int k)
{
	if(ind==n)
	{
		if(sum%k==0)
		{
			//cout<<sum<<"\n";
			count++;
		}
		return;
	}
	//v.emplace_back(a[ind]);
	pick_non_pick(n,a,ind+1,sum+a[ind],count,k);
	//v.pop_back();
	pick_non_pick(n,a,ind+1,sum,count,k);
}
int main()
{
	int n;
	cout<<"\nenter size of an array\n";
	cin>>n;
	int a[n];
	cout<<"\nenter array element\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0,sum=0,k;
	cout<<"\nenter value of k\n";
	cin>>k;
	vector<int>v;
	pick_non_pick(n,a,0,sum,count,k);
	cout<<count<<"\n";
	return 0;
}