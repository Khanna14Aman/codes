#include<stdio.h>
#define MAX 5
#define INFINITY 99999
void merge_sort(int p, int r);
void merge(int p,int q,int r);
int a[MAX];

int main()
{
    int i;
    printf("Enter the elements of array:\n");
    for(i=1;i<=MAX;i++)
        scanf("%d",&a[i]);
    merge_sort(1,MAX);
    printf("\nThe sorted array is:\n");
    for(i=1;i<=MAX;i++)
        printf("%d\t",a[i]);
    return 0;

}

void merge_sort(int p, int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge(p,q,r);

    }
}

void merge(int p,int q,int r)
{
    int L[20],R[20],n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
        L[i]=a[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=a[q+j];
    L[n1+1]=INFINITY;
    R[n2+1]=INFINITY;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}
