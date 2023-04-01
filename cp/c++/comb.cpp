#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	int i;
	cout<<"\nenter vlaue of array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int num=0;num <=(1<<n)-1;num++)
	{

		cout<<"{";
		for(i=0;i<n;i++)
		{
			if(num&(1<<i))
			{
				cout<<a[i];
			}
		}

		cout<<"}\n";
	}
	
	return 0;
}