#include <iostream>
using namespace std;
class laptop
{
public:
	int quantity;
	int price;
	laptop(int q, int p)
	{
		quantity = q;
		price = p;
	}
		void operator +(laptop const &obj)
		{
			laptop res;
			res.quantity = quantity + obj.quantity;
			res.price = price + obj.price;
			
		}
		void display()
		{
			cout<<"\nquantity : "<<quantity<<"\nprice : "<<price<<endl;
		}
};
int main()
{
	laptop l1(2,100);
	laptop l2(3,200);
	laptop l3 = l1 + l2;
	l3.display();
	return 0;
}