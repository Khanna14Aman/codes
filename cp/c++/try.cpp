#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);//will print aman khanna is very good person fully.
	cout<<a<<endl;
	string b;
	cin>>b;//will print aman only because cin terminates with space bar or tab bar;
	cout<<b; 
//int a=3324324324234234324;
//cout<<a;// this will be error because int a cant hold very large value;
	int long long c=324234324324323;
cout<<"\n"+c;
//using + sign here will show run time error
cout<<"\n",c;
//using , here will show run time error
cout<<"\n"<<c<<endl;//this is right method.	
	vector<int> v(3,33);
	
	cout<<v[33]<<"\n"<<v.empty()<<endl;

  float d=10.3482;//for printing upto or rounding off the floating numbers;
  printf("%.2f",d);
return 0;
}
