#include<iostream>
#define int long long//if you will not use long long here mod value will not work because ans *ans it self out of range so how it will work for mod
using namespace std;
int mod = 1e9+7;
void powe(int n, int base)
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
	cout<<ans<<"\n";
}
signed main()
{
	int power ,base;
	cin>>base>>power;
	powe(power,base);
	return 0;
}