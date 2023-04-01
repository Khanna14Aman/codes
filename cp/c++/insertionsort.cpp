#include<iostream>
using namespace std;
int main()
{
	int n,i,j,max;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		max=a[i];
		j=i-1;
		while(j>=0 && a[j]>max)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=max;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}