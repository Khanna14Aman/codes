#include<iostream>
using namespace std;
class base
{
public:
	virtual void print()
	{
		cout<<"\nbase class print function has been called";//this willl print if we not use virtual keyword with it.
	}
	virtual void display()
	{
		cout<<"\nbase class display function has been called";
	}
};
class derived : public base
{
public:
	void print(){
		cout<<"\na function of derived class has been called";
	}
	void display()
	{
		cout<<"\nb function of derived class has been called";
	}
};
int main()
{
	base *bs;
	derived d;
	bs = &d;
	bs->print();
	bs->display();
	return 0;
}