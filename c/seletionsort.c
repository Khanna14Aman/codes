#include<stdio.h>

void main()
{
	int n;
	printf("\nenter size of array\n");
	scanf("\n%d",&n);
	int a[n],smallest,i,j,no,change;
	printf("\nenter ements\n");
	for(i=1;i<=n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	no=n;
	for(j=1;j<=no-1;j++)
	{
		smallest=j;
		for(i=j+1;i<=no;i++)
		{
			if(a[i]<a[smallest])
			{
				smallest=i;
			}
		}
        change=a[j];
        a[j]=a[smallest];
        a[smallest]=change;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}