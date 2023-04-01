#include<iostream>
using namespace std;

void insert(int a[], int n, int *front, int *rear)
{
	if(n*front==0 && *rear==n || *rear==(*front-1)%n)
	{
		cout<<"\nqueue is full";
		return;
	}
	int value;
	cout<<"\nenter value to insert";
	cin>>value;
	if(*rear==-1 && *front==-1)
	{
		*rear=0;
		*front=0;
		a[*rear]=value;
		return;
	}
	if(*rear==n && *front!=0)
	{
		*rear=0;
		a[*rear]=value;
		return;
	}
	else
	{
		*rear=*rear+1;
		a[*rear]=value;
		return;
	}
}
void del(int a[], int n, int *front, int *rear)
{
	if(*front==-1 && *rear==-1)
	{
		cout<<"\nqueue is empty";
		return;
	}
	int value;
	if(*front==n && *rear!=0)
	{
		value=a[*front];
		*front=0;
		cout<<"\ndeleted element is "<<value;
		return;
	}
	if(*rear==*front)
	{
		value=a[*front];
		cout<<"\ndeleted element is "<<value;
		*front=-1;
		*rear=-1;
		return;
	}
	else
	{
		value=a[*front];
		*front=*front+1;
		cout<<"\ndeleted element is "<<value;
		return;
	}
}
int main()
{
	int n,ch,no,front=-1,rear=-1;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	do
	{
		cout<<"\nenter 1 for insert\nenter 2 for delete\nelse quit";
		cin>>n;
		if(n==1)
			insert(a,n-1,&front,&rear);
		else if(n==2)
			del(a,n-1,&front,&rear);
		cout<<"\nenter 0 to stop else any key";
		cin>>ch;

	}while(ch);


	return 0;
}