#include<iostream>
using namespace std;
int main()
{
	int n,i,j,smallest,temp;
	cout<<"enter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		smallest=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[smallest])
				smallest=j;
		}
		temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";

	return 0;
}