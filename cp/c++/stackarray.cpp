#include<iostream>
using namespace std;
void push(int a[], int n, int *top)
{
	if(*top==n)
	{
		cout<<"\nstack is full";
		return;
	}
	else
	{
		int value;
		cout<<"\nenter value";
		cin>>value;
		*top=*top+1;
		a[*top]=value;
		return;
	}
}
void pop(int a[], int n, int *top)
{
	if(*top==-1)
	{
		cout<<"\nstack is empty";
		return;
	}
	else
	{
		int value;
		value=a[*top];
		*top=*top-1;
		cout<<value<< "  is poped";
		return;
	}
}
int main()
{
	int ch, n,no,top=-1;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	do
	{
		cout<<"\nenter 1 for push \n2 for pop \nelse quit";
		cin>>ch;
		if(ch==1)
			push(a,n-1,&top);
		else if(ch==2)
			pop(a,n-1,&top);
		cout<<"\nfor stop press 0 else any button";
		cin>>no;
	}while(no);
	
	return 0;


}