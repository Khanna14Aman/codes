#include<stdio.h>
void quick_sort(int a[],int p,int r);
int partion(int a[],int p, int r);
void main()
{
	int n,i,p;
	printf("enter size of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}
void quick_sort(int a[],int p,int r)
{
	int q;
	if (p<r)
	{
		q=partion(a,p,r);
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);
	}
}
int partion(int a[],int p,int r)
{
	int j,temp, x=a[r];
	int i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return (i+1);
}