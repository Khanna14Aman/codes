#include<stdio.h>
void main()
{
	int i,j,k;
	printf("a\tb\tc\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d\t%d\t%d\n",i,j,k);
			}
		}
	}
}