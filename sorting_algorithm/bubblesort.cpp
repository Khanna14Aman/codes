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
	int n,i,j,temp,flag;
	cout<<"enter size of an array";
	cin>>n;
	int a[n];
	cout<<"\nenter element of an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
			break;
	}
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";


	return 0;
}