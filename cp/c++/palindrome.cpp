#include<iostream>
#include<string>
using namespace std;
bool check(int l,int r, string s)
{
	if(l>=r)
	{
		return true;
	}
	else if(s[l]!=s[r])
	{
		return false;
	}
	else
		return check(l+1,r-1,s);
}
int main()
{
	string s;
	cout<<"\nenter string to check palindrome\n";
	cin>>s;
	int l=0,r=s.size()-1;
	bool c = check(l,r,s);
	cout<<c<<"\n";
	
	return 0;

}