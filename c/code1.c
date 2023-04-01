#include<stdio.h>
void main()
{
    int k,i,j,smallest,sum,n,no,temp;
    scanf("%d",&no);
    int b[no];
    for(k=1;k<=no;k++)
    {
        sum=0;
        scanf("%d",&n);
        int a[n];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            smallest=i;
            for(j=i+1;j<=n;j++)
            {
                if(a[j]<a[smallest])
                {
                    smallest=j;
                }
                temp=a[i];
                a[i]=a[smallest];
                a[smallest]=temp;
            
            }
            sum = sum + (smallest-i+1);

            temp=a[i];
            a[i]=a[smallest];
            a[smallest]=temp;
            
        }
        b[k]=sum;
    }
    for(k=1;k<=no;k++)
    {
        printf("case #%d:%d\n",k,b[k]);
    }
}