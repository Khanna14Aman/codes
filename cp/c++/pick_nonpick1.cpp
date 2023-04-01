#include<iostream>   // dont use this method in interview
#include<vector>
using namespace std;
int count(int n, int a[], int ind, int sum,int k)
{
	if(ind==n)
	{
		return(sum%k==0);
	}
	int l =count(n,a,ind+1,sum+a[ind],k);
	int r =count(n,a,ind+1,sum,k);
	return (l+r);
}
int main()
{
	int n;
	cout<<"\nenter size of an array\n";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array\n";
	for(int i=0;i<n;i++)
		cin>>a[i];

	int k,sum = 0;
	cout<<"\nenter vlaue of k\n";
	cin>>k;
	int c = count(n,a,0,sum,k);
	cout<<c<<"\n";
	return 0;
}