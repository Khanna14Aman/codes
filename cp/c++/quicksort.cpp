#include<iostream>
using namespace std;
int partition(int a[], int p, int r)
{
	int j,temp, x=a[r];
	int i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{

			i=i+1;
			cout<<a[i]<<" "<<a[j]<<endl;

			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	cout<<a[i+1]<<" hello "<<a[r]<<endl;
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return (i+1);
}

void quick_sort(int a[], int p, int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		cout<<q<<endl;
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);

	}
}
int main()
{
	int n,i;
	cout<<"enter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";


	return 0;
}
