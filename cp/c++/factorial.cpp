#include<iostream>
#define int long long
using namespace std;
const int maxi = 1e7;
int a[maxi];
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
	return ans;
}
void fact(int n,int r)
{
	int ans,num,den;
	ans=1;
	num = a[n];
	den = (a[r]*a[n-r])%mod;
	ans = (ans*num)%mod;
	ans = (ans*powe(den,mod-2))%mod;
	cout<<ans<<"\n";

}
signed main()
{
	int i;
	a[0]=1;
	for(i=1;i<1e7;i++)
	{
		a[i]=(a[i-1]*i)%mod;
	}
	int n,r;
	cout<<"\nenter value of n and r\n";
	cin>>n>>r;
	fact(n,r);
	return 0;
}