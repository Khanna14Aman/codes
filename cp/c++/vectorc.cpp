#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int>>vec;
	int n,m;
	cout<<"\nenter no of rows ";
	cin>>n;
	cout<<"\nenter no of columns";
	cin>>m;
	int i,j,l;
	for(i=0;i<n;i++)
	{
		vector<int>v;
		for(j=0;j<m;j++)
		{
			cout<<"\nenter value at"<<i<<j;
			cin>>l;
			v.push_back(l);
		}
		vec.push_back(v);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<"  "<<vec[i][j];
		}
		cout<<"\n";
	}

	

	return 0;
}