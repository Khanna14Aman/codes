#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i,small,count=0,d=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        small=a[0];
        d++;
        for(i=1;i<n;i++)
        {
            if(a[i]==a[0])
            {
                small += a[i];
                d++;
            }
            else
            {
                break;
            }
        }
        int del=0;
        int avg = small/d;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            {
                a[i]=0;
                del++;
            }
        }
        cout<<del<<"\n";
        
    }
    return 0;
}