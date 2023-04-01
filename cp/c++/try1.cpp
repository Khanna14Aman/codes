#include <iostream>
#include<string>
#include<cassert>
using namespace std;

int main() {
    int long long t,m=10000,tn=0;
    cin>>t;
    while(t--)
    {
        int n,mx=0;
        int i,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        tn=tn+n;
        for(auto d : s)
        {
            assert('a'<=d&&d<='z' || d=='*');
        }
        for(auto j : s)
        {
            if(j=='*')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if(cnt>mx)
            {
                mx=cnt;
            }
            else
            {
                mx = mx;
            }
        }
        if(mx>=k)
        {
            cout<<"\nyes";
        }
        else
        {
            cout<<"\nno";
        }
        assert(tn<=m);
    }
	// your code goes here
	return 0;
}


