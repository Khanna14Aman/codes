#include<stdio.h>
int  main()
{
	int i,j,m;
    printf("boolean truth table for AND,OR,NOT\n");
    printf("\nA\tB\tc\n");
    for(i=0;i<2;i++)
    {
	for(j=0;j<2;j++)
	    {
		for (m=0;m<2;m++)
		  {
			printf("%d\t%d\t%d\t",i,j,m);
		  }
		
	    }
    }
return 0;
}

