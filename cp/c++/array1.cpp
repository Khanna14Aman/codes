#include<iostream>
using namespace std;
int fun(int pos, int &hits, int value, int a[], int b[], int n, int q, int c[] )
{
    if((hits+value)<a[pos])
    {
        hits += value;
        return pos;
    }
    int low = pos, high = n, mid,ret;
    while(low<=high)
    {
        mid=(low+high)/2;
        if((c[mid]-c[pos-1]-hits)<=value)
        {
            ret = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    if(ret==n)
    {
        hits = 0;
        return 1;
    }
    ret++;
    int temp = (c[ret]-c[pos-1]-hits-value);
    hits = a[ret]-temp;
    return ret;
}
int main()
{
    int n,q,i;
    cin>>n>>q;
    int a[n],b[q],c[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i] = c[i-1]+a[i];
        
    }
    int pos =1;
    int hits =0;
    for(i=0;i<q;i++)
    {
        cin>>b[i];
        int pos = fun(pos,hits,b[i],a,b,n,q,c);
        cout<<(n-pos+1)<<"\n";
    }
    return 0;
}