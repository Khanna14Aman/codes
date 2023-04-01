#include<iostream>
using namespace std;
void sort(int a[], int n);
void buildheap(int a[], int n);
void heapify(int a[], int i, int n);
void sort(int a[], int n)
{
	int temp,i;
	buildheap(a,n);
	for(i=n-1;i>0;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a,0,i);
	}

}
void buildheap(int a[], int n)
{
	int i;
	for(i=(n/2)-1;i>=0;i--)
		heapify(a,i,n);
}
void heapify(int a[], int i, int n)
{
	int temp,l=(2*i)+1;
	int r=(2*i)+2;
	int largest;
	if(l<n && a[l]>a[i] )
		largest=l;
	else
		largest=i;
	if(r<n && a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{
		temp=a[largest];
		a[largest]=a[i];
		a[i]=temp;
		heapify(a,largest,n);
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
	sort(a,n);
	cout<<"\nsorted array is";
	for(i=0;i<n;i++)
		cout<<"   "<<a[i];

	return 0;
}