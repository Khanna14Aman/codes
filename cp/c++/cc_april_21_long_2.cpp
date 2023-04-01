#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	
	int i,t;
	cin>>t;
	string o[t]; 
	float k1,k2,k3,v,c;
	for(i=0;i<t;i++)
	{
		cin>>k1;
		cin>>k2;
		cin>>k3;
		cin>>v;
		c=100/(k1*k2*k3*v);
		c = (int)(c*100+0.5);
		c=(float)c/100;
		cout<<"\n"<<c;
		if(c < 9.575)//here no should be less than 9.58 but no above 9.575 already rounded off to 9.58
		{
			o[i]="yes";
		}
		else 
		{
			o[i]="no";
		}


	}
	for(i=0;i<t;i++)
		cout<<"\n"<<o[i];
	return 0;
}