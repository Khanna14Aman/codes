#include<bits/stdc++.h>
                 
                using namespace std;
                 
                const long long int mod = 1000000007L;
                long long int T,n,i,j,k,in,cnt,l,r,u,v,x,y;
                long long int m;
                string s;

                int main(void) {
                    ios_base::sync_with_stdio(false);cin.tie(NULL);//this line is used to speed up the input and output function.
                    //means printf and scanf is faster than cin and cout so instead you want to use cin cout than use this line.
                    cin >> T;
                    while(T--)
                    {
                        cin >> n >> k >> s;
                        long long int mx=0,cnt=0;
                        for(auto x:s)
                        {
                            assert(('a'<=x&&x<='z')||(x=='*'));//assert present in "cassert" library.
                            if(x=='*')
                                cnt++;
                            else
                                cnt=0;
                            mx=max(mx,cnt);
                        }
                        cout<<(mx>=k?"YeS":"nO")<<endl;
                    } 
                    return 0;
                }