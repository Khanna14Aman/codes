#include<iostream>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int partition(int a[], int p, int r)
{
	int j,temp, x=a[r];
	int i=p; // i will point the index where all element less or equal to x should be placed..
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
		}
	}
	temp=a[i];
	a[i]=a[r];
	a[r]=temp;
	return (i);
}

void quick_sort(int a[], int p, int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r); // we will find exact position in sorted array where a[r] should be placed so that all the element left of it will be less or equal to a[r] && all the element at right of that greater than a[r]
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);

	}
}
int main()
{
	  fio;
  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);  
  #endif
	int n,i;
	cout<<"enter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";


	return 0;
}
