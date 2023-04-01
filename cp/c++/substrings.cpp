#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sub="";
    cin>>s;
    int n =s.length();
    int i,j;
    for(i=0;i<n;i++)
    {
        sub="";
        for(j=i;j<n;j++)
        {
            sub += s[j];
            cout<<"\n"<<sub;
            
        }
    }
    return 0;
}