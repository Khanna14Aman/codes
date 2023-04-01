// question ==> find no of pattern match in strings
// string ==> aabaa
// pattern ==>aa
// answer ==>2
#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
int rabinkarp(string s, string pat)
{
    int count=0;
    int n = s.length();
    int k = pat.length();
    int pr=1,mod=1e9+7,i,hashp=0;
    for(i=0;i<k;i++)
    {
        //cout<<"1";
        hashp = (hashp + ((pat[i]-'a'+1)*pr)%mod)%mod;
        pr =(pr*31)%mod;
    }
    int pr1 =1,pr2=1,hashs=0;
    for(i=0;i<k;i++)
    {
        //cout<<"2";
        hashs = (hashs +((s[i]-'a'+1)*pr2)%mod)%mod;
        pr2 = (pr2 * 31)%mod;
    }
    if(hashs==hashp)
    {
        //cout<<"\n"<<hashs<<"  "<<hashp<<endl;
        //cout<<"3";
        count++;
    }
    int l =0, r = k-1;
    while(r!=(n-1))
    {
        //cout<<"4";
        r++;
        hashs = (hashs +((s[r]-'a'+1)*pr2)%mod)%mod;
        hashs = (hashs -(((s[l]-'a'+1)*pr1)%mod)+mod)%mod;
        l++;
        pr1 = (pr1 * 31)%mod;
        pr2 = (pr2 * 31)%mod;
        hashp = (hashp * 31)%mod;//important
        //cout<<"\n"<<hashs<<"  "<<hashp<<endl;
        if(hashs==hashp)
        {
           // cout<<"\n"<<hashs<<"  "<<hashp<<endl;
            //cout<<"5";
            count++;
        }
    }
    return count;
}
signed main()
{
    string s,pat;
    cout<<"\nenter string \n";
    cin>>s;
    cout<<"\nenter pattern string\n";
    cin>>pat;
    int count=0;
    count=rabinkarp(s,pat);
    cout<<count;
    return 0;
}