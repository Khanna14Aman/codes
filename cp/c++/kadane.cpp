#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"]nenter size of an array \n";
	cin>>n;
	int a[n];
	int i,maxi,sum=0;
	cout<<"\nenter element of an array]n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	maxi=a[0];
	for(i=0;i<n;i++)
	{
		sum += a[i];
		if(sum>maxi)maxi=sum;
		if(sum<0)sum=0;
	}
	cout<<maxi<<"\n";
	return 0;
}