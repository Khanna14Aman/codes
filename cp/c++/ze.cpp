#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
void ze(string s)
{
    int i = 1,l=0,r=0,n=s.length();
    vector<int>ze(n,0);
    while(i<n)
    {
        if(i<=r)
        {
            ze[i] = min(ze[i-l],r-i+1);
        }
        while((i+ze[i])<n && s[i+ze[i]]==s[ze[i]])
            ze[i]++;
        if((i+ze[i]-1)>r)
        {
            l=i;
            r=i+ze[i]-1;
        }
        i++;
    }
    for(i=0;i<n;i++)
    {
        cout<<ze[i]<<" ";
    }
}
signed main()
{
    string s;
    cout<<"\nenter string\n";
    cin>>s;
    ze(s);
    return 0;
}
