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
    set<string>st;
    for(i=0;i<n;i++)
    {
        sub="";

        for(j=i;j<n;j++)
        {
            sub += s[j];
            st.insert(sub);
        }
    }
    cout<<st.size();
    return 0;
}