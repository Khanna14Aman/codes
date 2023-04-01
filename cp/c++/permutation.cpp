#include<iostream>
#include<string>
#include<map>
using namespace std;
//dont declare i globally because it will get change for every where and we get output only abc.
void permut(int n, int ind, string ans, string s, map<int,int>&mpp)
{
	if(ind == n)
	{
		cout<<ans<<"\n";
		return;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(!mpp[i])
			{
				mpp[i]=1;
				ans += s[i];
				permut(n,ind+1,ans,s,mpp);
				mpp[i]=0;
				ans.pop_back();
			}
		}
	}
}
int main()
{
	string s ="abc";
	string ans;
	int n = s.size();
	int ind=0;
	map<int,int>mpp;
	permut(n,ind,ans,s,mpp);
	return 0;
}