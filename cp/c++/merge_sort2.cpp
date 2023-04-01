#include<iostream>
#include<vector>
using namespace std;
void merge(int low , int high , int mid, int a[])
{
	//cout<<low<<" "<<high<<" "<<mid<<endl;
	int left =low;
	int right = mid+1;
	vector<int>v;
	while(left<=mid && right<=high)
	{
		if(a[left]<=a[right])
		{
			v.emplace_back(a[left]);
			left++;
		}
		else
		{
			v.emplace_back(a[right]);
			right++;
		}
	}
	while(left<=mid)
	{
		v.emplace_back(a[left++]);
		
	}
	while(right<=high)
	{
		v.emplace_back(a[right++]);
	}
	for(int i=low ;i<=high;i++)
	{
		a[i]=v[i-low];

	}
}
void mergesort(int low , int high , int a[],int n)
{
	if(low>=high)
		return ;
	else
	{
		//cout<<low<<" "<<high<<"\n";
		int mid = (low+high)>>1;
		mergesort(low,mid,a,n);
		mergesort(mid+1,high,a,n);
		merge(low,high,mid,a);
	}
}
int main(){

	int n;
	cout<<"\nenter no of element in array\n";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	mergesort(0,n-1,a,n);
	 cout<<"\nsorted aray is \n";
	 for(int i=0;i<n;i++)
	 	cout<<a[i]<<" ";
	return 0;
}