#include<iostream>
#include<vector>
using namespace std;
int count(int n,int a[],int k,int ind,int sum)
{
	if(ind==n)
	{
		if(sum%k==0)
			return 1;
		else
			return 0;
	}
	return (count(n,a,k,ind+1,sum+a[ind])+count(n,a,k,ind+1,sum));
}
int main()
{
	int n;
	cout<<"\nenter size of an array\n";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an arry \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k,sum=0;
	cout<<"\nenter value of k\n";
	cin>>k;
	int c = count(n,a,k,0,sum);
	cout<<c<<"\n";
	return 0;
}