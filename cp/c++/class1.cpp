#include<iostream>
#include <string>
using namespace std;
class laptop
{
public:  //public specifier
	int quantity;
	string name;
	string brand;
	string processor;
	float price;
	void d()
	{
		cout<<"\ndo you like this"<<endl;
	}

	void input()
	{
		cout<<"Name : ";
		cin>>name;
		cout<<"brand : ";
		cin>>brand;
		cout<<"quantity : ";
		cin>>quantity;
		cout<<"processor : ";
		cin>>processor;
		cout<<"price : ";
		cin>>price;

	}
	void display()
	{
		cout<<"\ndetails are";
		cout<<"\nName : "<<name;
		cout<<"\nbrand : "<<brand;
		cout<<"\nquantity : "<<quantity;
		cout<<"\nprocessor : "<<processor;
		cout<<"\nprice : "<<price<<endl;

		d();
	}

}ab;
int main()
{
	laptop l,l2,l3;//class objects
	ab.d();
	l3.d();
	l.input();
	l.display();
	l2.input();
	l2.display();
	l3.display();//garbage value will be displayed in all data types accept string


	return 0;
}