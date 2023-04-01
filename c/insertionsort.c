#include<stdio.h>

void main()
{
	int n;
	printf("\nenter size of array\n");
	scanf("\n%d",&n);
	int a[n],key,j,i;
	printf("\nenter ements\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
