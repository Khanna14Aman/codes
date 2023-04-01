#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
int powe(int base, int n, int mod)
{
    int ans = 1;
    while(n)
    {
        if(n%2==0)
        {
            base = (base*base) % mod;
            n /=2;
        }
        else
        {
            ans = (ans*base) % mod;
            n -= 1;
        }
    }
    return ans;
}
signed main()
{
    string s;
    int mod = 1e9+7;
    cout<<"\nenter string\n";
    cin>>s;
    int n = s.length();
    int pre[n],i,hash=0,pr=1;
    for(i=0;i<n;i++)
    {
        hash = (hash + ((s[i]-'a'+1)*pr)%mod)%mod;
        pr = (pr * 31)%mod;
        pre[i] = hash;
    }
    int q;
    cout<<"\nenter no of query to ask\n";
    cin>>q;
    while(q--)
    {
        int l1,r1,l2,r2;
        cout<<"\nenter l1 and r1\n";
        cin>>l1>>r1;
        cout<<"\nenter l2 and r2\n";
        cin>>l2>>r2;
        int hash1=pre[r1],hash2=pre[r2];
        if(l1>0)
        {
            hash1 = (hash1-pre[l1-1]+mod)%mod;//at place hash1 right side we can use pre[r1]
        }
        hash1 = (hash1*powe(powe(31,l1,mod),mod-2,mod))%mod;
        if(l2>0)
        {
            hash2 = (hash2-pre[l2-1]+mod)%mod;
        } 
        hash2 = (hash2*powe(powe(31,l2,mod),mod-2,mod))%mod;
        if(hash1==hash2)
        {
            cout<<"\nyes\n";
        }
        else
        {
            cout<<"\nno\n";
        }
    }
    return 0;
}