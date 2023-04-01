#include<iostream>
#define int long long
using namespace std;
int mod = 1e9+7;
signed main()
{
	int n,r,i,num=1,den=1;
	cout<<"\nenter value of n and r\n";
	cin>>n>>r;
	int c = min(r,n-r);
	for(i=1;i<=c;i++)
	{
		num = num*(n-i+1);
		den = den*i;

	}
	cout<<(num/den)<<"\n";
	return 0;
}
