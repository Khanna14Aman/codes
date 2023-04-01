#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    string s,sub="";
    cin>>s;
    int hash = 0,pr=1,mod = 1e9+7;
    int n = s.length();
    int i,j;
    set<int>st;
    for(i=0;i<n;i++)
    {
        hash = 0;
        pr =1;
        sub="";

        for(j=i;j<n;j++)
        {
            sub += s[j];
            hash = (hash + ((s[j]-'a'+1)*pr)%mod)%mod;
            pr = (pr * 31);
            st.insert(hash);
        }
    }
    cout<<st.size();
    return 0;
}