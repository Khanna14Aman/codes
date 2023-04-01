#include<iostream>
#include<string>
using namespace std;
class laptop
{
public:
	string name;
	int quantity;
	laptop()//default constructor
	{
		cout<<"\ndefault constructor";
		cout<<"\nName : ";
		cin>>name;
		cout<<"\nquantity : ";
		cin>>quantity;
		cout<<"\nName : "<<name<<"\nquantity : "<<quantity<<endl;
	}
	laptop(string l, int q)//parameterized constructor
	{
		name=l;
		quantity=q;
		cout<<"\nparameterized constructor";
		cout<<"\nName : "<<name<<"\nquantity  : "<<quantity<<endl;
	}
	laptop(laptop &m)//copy constructor
	{
		cout<<"\ncopy constructor";
		name=name;//without using m will not copy the name;
		quantity=m.quantity+1000;
		cout<<"\nName : "<<name<<"\nquantity  : "<<quantity<<endl;	
	}
	~laptop()//destructor
	{
		cout<<"\ndestructing : "<<quantity<<endl;
	}
	bool operator == (laptop &m)
	{
		if(name==m.name || quantity==m.quantity+1000)
			return true;
		else 
			return false;
	}
};
int main()
{
	laptop l;
	laptop m("vivobook",34);//constructor call only once at the time of declaring object
	laptop k=m;
	if(k==m)  //  operator overloading
		cout<<"\nsame"<<endl;
	else
		cout<<"\nnot same"<<endl;
	return 0;
}