#include<iostream>
using namespace std;
void f(int a,int b)
{
	if(b==0)
	{
		cout<<a<<"\n";
		return;
	}
	else
		return f(b,a%b);
}
int main()
{
	int a,b;
	cout<<"\nenter value of a and b";
	cin>>a>>b;
	f(a,b);
	
	return 0;

}