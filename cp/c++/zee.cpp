#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
vector<int> ze(string s)
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
    return ze;
}
void zee()
{
    string s,pat;
    cout<<"\nenter string\n";
    cin>>s;
    cout<<"\nenter pattern string\n";
    cin>>pat;
    int n = s.length(),no= pat.length(),i;
    vector<int>vec = ze(pat+"$"+s);
    int count=0, k = vec.size();
    for(i=0;i<k;i++)
    {
        if(vec[i]==no)
        {
            count++;
        }
    }
    cout<<count;
}
signed main()
{
    zee();
    return 0;
}