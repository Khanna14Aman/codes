#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
vector<int> lps(string s,int n)
{
    int i =1,len =0;
    vector<int>lps(n,0);/*here we can name this vector same as function name and important thing is we need to
                         initialise size of vector and initialise with 0 if you will not then at lps[i] programe gets
                         over or means runtime error*/
    while(i<n)
    {
        //cout<<"1";
        if(s[i]==s[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
          //  cout<<"3";
            if(len!=0)
            {
            //    cout<<"4";
                len = lps[len-1];
            }
            else
            {
              //  cout<<"5";
                i++;
            }
        }
    }
    //cout<<"7";
    return lps;

}
signed main()
{
    string s;
    cout<<"\nenter string\n";
    cin>>s;
    int n =s.length();
    vector<int>lp;//we cannot name this vector same as function name 
    lp=lps(s,n);
    for(int i=0;i<n;i++)
        cout<<lp[i]<<" ";
    return 0;
}