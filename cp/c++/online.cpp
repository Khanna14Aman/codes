#include<iostream>
using namespace std;
int main()
{
	//int t;
	//cin>>t;
	//while(t--)
	//{
		int i,x,j,first,flag,last,c;
		cin>>first>>last;
		for(x=first;x<=last;x++)
		{
			flag=0,c=0;
			for(j=2;j<=(x/2);j++)
			{
				if((x%j)==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				int sum=0;
				while(x!=0)
				{
					sum = sum + (x%10);
					x=x/10;
				}
				int f=0;
				for(i=2;i<=(sum/2);i++)
				{
					if((sum%i)==0)
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					c++;
				}
			}
		}
		cout<<c<<endl;
	//}
	return 0;
}