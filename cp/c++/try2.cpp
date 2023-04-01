#include<bits/stdc++.h>
using namespace std;
int main()
{
	int long a;
	vector<long>v;
	cout<<"\nenter element   ";
	for(int i=0;i<5;i++)
	{
		cin>>a;
		v.push_back(a);

	}

	int long b,c;
	b = *min_element(v[0],v[5]);
	c = *max_element(v.begin(),v.end());
	cout<<"min element is  "<<b<<"   mex element iss   "<<c;
	return 0;
}