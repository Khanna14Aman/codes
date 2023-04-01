#include<iostream>
using namespace std;
void insert(int a[], int n, int *front, int *rear)
{
	if((*rear+1)%n==*front)
	{
		cout<<"\nqueue is full";
		return;
	}
	else
	{
		int value;
		cout<<"\nenter value to inset";
		cin>>value;
		*rear=(*rear+1)%n;
		a[*rear]=value;
		return;
	}
}
void del(int a[], int n, int *front, int *rear)
{
	if(*front==*rear)
	{
		cout<<"\nqueue is empty";
		return;
	}
	int value=a[*front];
	cout<<"\ndeleted value is "<<value;
	*front=(*front+1)%n;
	return;
}
int main()
{
	int n,front=0,rear=0,no,ch;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	do
	{
		cout<<"\npress 1 for insert\npress 2 for delete\nelse quit";
		cin>>ch;
		if(ch==1)
			insert(a,n-1,&front,&rear);
		else if(ch==2)
			del(a,n-1,&front,&rear);
		cout<<"\npress 0 to stop else any key";
		cin>>n;
	}while(n);
	

	return 0;

}