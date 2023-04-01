#include<iostream>
using namespace std;
int main()
{
	int n,ind,k,i,j;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n],b[10][n];
	cout<<"\nenter how many digit no use use";
	cin>>k;
	cout<<"\nenter elements of an array";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<10;i++)
		for(j=0;j<n;j++)
			b[i][j]=0;
	int p=1;
	while(k!=0)
	{
		
		for(i=0;i<n;i++)
		{
		
			ind=(a[i]/p)%10;
			for(j=0;j<n;j++)
				if(b[ind][j]==0)
				{
					b[ind][j]=a[i];
					break;
				}
			
		}
		int c=0;
		for(i=0;i<10;i++)
		{
			for(j=0;j<n;j++)
				if(b[i][j]!=0)
				{
					a[c]=b[i][j];
					c++;
					b[i][j]=0;
				}
		}

		k=k-1;
		p=p*10;
				
	}
	for(i=0;i<n;i++)
		cout<<"\t"<<a[i];


	return 0;
}