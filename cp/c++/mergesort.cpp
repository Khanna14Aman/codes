#include<iostream>
using namespace std;
# define inf 999
void merge(int a[], int p, int q, int r)
{
	int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;
	int l[n1+1],v[n2+1];
	for(i=1;i<=n1;i++)
		l[i]=a[i+p-1];
	for(j=1;j<=n2;j++)
		v[j]=a[q+j];
	l[n1+1]=inf;
	v[n2+1]=inf;
	i=1;
	j=1;
	for(k=p;k<=r;k++)
	{
		if(l[i]<=v[j])
		{
			a[k]=l[i];
			i++;
		}
		else
		{
			a[k]=v[j];
			j++;
		}
	}
}
void sortmerge(int a[], int p, int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		sortmerge(a,p,q);
		sortmerge(a,q+1,r);
		merge(a,p,q,r);
	}
}
int main()
{
	int n,i;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	sortmerge(a,0,n-1);
	cout<<"\noutput";
	for(i=0;i<n;i++)
		cout<<"   "<<a[i];


	return 0;
}