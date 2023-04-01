#include<iostream>  //this algorithm is to use in interview..
#include<vector>
using namespace std;
void sub(int n,int ind,int a[],vector<int>v)
{
	
	cout<<"\n{";
	for(auto it : v)
		cout<<it;
	cout<<"}";

	for(int i = ind;i<n;i++)
	{
		v.emplace_back(a[i]);
		sub(n,i+1,a,v);
		v.pop_back();
	}
		

}
int main()
{
	int n;
	cout<<"\nenter size of an array\n";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int>v;
	sub(n,0,a,v);
	return 0;
}