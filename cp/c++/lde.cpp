#include<iostream>
using namespace std;
int main()
{
	int a,b,c,x,k=1 ,y,i;
	cout<<"\nenter a,b,c\n";
	cin>>a>>b>>c;
	for(i=1;i<=1000;i++)
	{
		if((c-(a*i))%b==0)
		{
			x=i;
			y=(c-(a*i))/b;
			cout<<"\nx"<<k<<" = "<<x<<"  "<<"y"<<k<<" = "<<y;
			k++;
		}
	}
	return 0;
}