#include<iostream>
#include<string>
using namespace std;
class laptop
{
	public:
	laptop()
	{
		cout<<"\nbase laptop class callled";
	}
~laptop()
{
	cout<<"\n3 hello aman";
}
};
class gaminglaptop : public laptop
{
public:
	gaminglaptop()
	{
		cout<<"\nbase gaminglaptop class callled";
	}
~gaminglaptop()
{
	cout<<"\n2 hello aman";
}
};
class gamingsystem : public gaminglaptop
{
public:
	gamingsystem()
	{
	cout<<"\nbase gamingsystem laptop class callled";
}
~gamingsystem()
{
	cout<<"\nhell0 aman";
}
};
class g
{
public:
	g()
	{
		 cout<<"\ng base is called";
	}
};
class it
{
public:
	it()
	{
		cout<<"\nit is called";
	}
};
class ucer : public g,public it//multiple inheritance
{
public:
	ucer()
	{
		cout<<"\nthis is last";
	}
};
int main()
{
	gamingsystem game;    //here the example of multilevel inheritence
	ucer u;    //destructor calls at last
	return 0;     //destructor starts calling at last after return 0;
}