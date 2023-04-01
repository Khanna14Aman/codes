#include<bits/stdc++.h>
#define int long long 
using namespace std;
#define int long long
int mod = 1e9+7;
 
int powe(int base, int n)
{
	int ans = 1;
	while(n)
	{
		if(n%2==0)
		{
			base = (base*base) % mod;
			n /=2;
		}
		else
		{
			ans = (ans*base) % mod;
			n -= 1;
		}
	}
	return ans%mod;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        vector<int>v;
        int ans = 0;
        int temp = n;
        while(k!=0){
            v.emplace_back(k%2);
            k = k/2;            
        }
        int no = v.size();
        set<int>st;
        for(int i=0;i<no;i++){
            if(v[i]==1){
                st.insert(i);
                //cout<<v[i]<<" ";
            }
        }
        //cout<<endl;
        for(auto it:st){
            ans = (ans+powe(temp,it))%mod;
        }
        cout<<ans<<"\n";
    }
    return 0;
}