#include<iostream>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
	  fio;
  #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);  
  #endif
	int n,i,j,smallest,temp;
	cout<<"enter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	// here we will try to put smallest element at first..
	for(i=0;i<n-1;i++)
	{
		smallest=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[smallest])
				smallest=j;
		}
		temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";

	return 0;
}