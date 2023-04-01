#include<stdio.h>
void main()
{
	int a,b,i,temp;
	printf("A\tB\t!A\t!B\tA||B\tA&&B\n");
	for(i=0;i<4;i++)
	{
		b=i%2;
		a=i/2;
		printf("%d\t%d\t%d\t%d\t%d\t%d\t\n",a,b,!a,!b,a||b,a&&b);
	}
}
