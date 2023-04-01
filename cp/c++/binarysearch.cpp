#include<iostream>
using namespace std;
void binarysearch(int a[],int search, int low, int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==search)
		{
			cout<<"\nelement found at"<<mid;
			return;
		}
		else if(a[mid]>search)
		{
			return (binarysearch(a,search,low,mid-1));
		}
		else if(a[mid]<search)
		{
			return (binarysearch(a,search,mid+1,high));
		}
		
		
	}
	cout<<"\nelement is not present in array";
	return;
}
int main()
{
	int n,i,search,low=0;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n],high=n-1;
	cout<<"\nenter elements of an array in ascending order";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"\nenter element to be search";
	cin>>search;
	binarysearch(a,search,low,high);



	return 0;
}