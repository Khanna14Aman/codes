#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;
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

signed main()
{
	int n;
	cout<<"\nenter value of n\n";
	cin>>n;
	int i,ans=1,count=0;
	for(i=2;i*i<= n;i++)
	{
		if(n%i==0)
		{
			count=0;
			while(n%i==0)
			{
				count++;
				n=n/i;
			}
			ans = ans*(pow(i,count)-pow(i,count-1));
		}
	}
	if(n>1)
	{
		ans = ans * (n-1);
	}
	cout<<ans<<"\n";
	return 0;
}