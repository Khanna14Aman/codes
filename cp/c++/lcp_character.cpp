#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
int mini(vector<string>v)
{
    int i,no = v[0].length(),n = v.size();
    for(i=1;i<n;i++)
    {
        if(v[i].length()<no)
        {
            no = v[i].length();
        }
    }
   // cout<<no;
    return no;
}
string lps(vector<string>vec)
{
    int minlength = mini(vec),i,j,n=vec.size();
    char current;
    string sub = "";
    for(i=0;i<minlength;i++)
    {                                 
        current = vec[0][i];
      //  cout<<vec[0][i]<<"\n";
        for(j=1;j<n;j++)
        {
           // cout<<current<<"  "<<vec[j][i]<<"\n";
            if(vec[j][i]!=current)
                return sub;
        }
        sub += current;
    }
    return sub;
}
signed main()
{
    int n,i;
    cout<<"\nenter no of strings you want to insert\n";
    cin>>n;
    vector<string>vec;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        vec.emplace_back(s);
    }
    string ans = lps(vec);
    if(ans.length())
    {
        cout<<"\n"<<ans<<"\n";
    }
    else
    {
        cout<<"\nno such lcp exist\n";
    }
    return 0;
}