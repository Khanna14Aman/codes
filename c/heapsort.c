#include<stdio.h>
void sort(int a[],int n);
void buildheap(int a[],int n);
void heapify(int a[],int idx,int max);
void main()
{
	int n,i;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("\n enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void sort(int a[],int n)
{
	int i,temp;
	buildheap(a,n);
	for(i=n-1;i>=1;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a,0,i);

	}
}
void buildheap(int a[],int n)
{
	int i;
	for(i=(n/2)-1;i>=0;i--)
		heapify(a,i,n);
}
void heapify(int a[],int idx,int max)
{
	int temp;
	int left=(2*idx)+1;
	int right=(2*idx)+2;
	int largest;
	if (left<max && a[left]>a[idx])
	{
		largest=left;
	}
	else
		largest=idx;
	if (right<max && a[right]>a[largest])
	{
		largest=right;
	}
	if (largest!=idx)
	{
		temp=a[idx];
		a[idx]=a[largest];
		a[largest]=temp;
		heapify(a,largest,max);
	}
}