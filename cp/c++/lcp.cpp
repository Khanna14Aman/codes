#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
string find(string st1,string st2)
{
    int n1 = st1.size(),n2 = st2.size(),i,mini = min(n1,n2);
    string sub ="";
    for(i=0;i<mini;i++)
    {
        if(st1[i]!=st2[i])
            break;
        else
            sub += st1[i];
    }
    return sub;
}
string lcp(vector<string>vec)
{
    int i,n = vec.size();
    string prefix = vec[0];
    for(i=1;i<n;i++)
    {
        prefix = find(prefix,vec[i]);
    }
    return prefix;
}
signed main()
{
    int i;
    vector<string>vec;
    cout<<"\nenter no of strings you want to enter\n";
    int n;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        vec.emplace_back(s);
    }
    string ans = lcp(vec);
    if(ans.length())
    {
        cout<<ans<<"\n";
    }
    else
    {
        cout<<"\n no lcp exist\n";
    }
    return 0;
}