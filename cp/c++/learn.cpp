#include<iostream>
using namespace std;
int main()
{
	float c;
	cin>>c;
	c=int(c*100+0.5);
	c=float(c/100);
	cout<<"\n"<<c;
	if(c<11.58)//if I enter 11.575 to 11.58 it will automatically rount off to 11.58 but in reality it is less than 11.58 as example 11.576 will print hello
		cout<<"\nhello";
	else
		cout<<"\nbye";
	return 0;
}