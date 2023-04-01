#include<iostream>
using namespace std;
void insert(int a[], int n, int *front, int *rear)
{
	if(*rear==n)
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
	else
	{
		*rear=*rear+1;
		a[*rear]=value;
		return;
	}
}
void del(int a[], int n, int *front, int *rear)
{
	if(*front==-1 || *front>*rear)
	{
		cout<<"\nqueue is empty";
		return;
	}
	int value;
	if(*front==n)//we can use *front == *rear here instead of *front>*rear
	{
		value=a[*front];
		*front=-1;
		*rear=-1;
		cout<<"\ndeleted element is  "<<value;
		return;
	}
	else
	{
		value=a[*front];
		cout<<"\ndeleted element is  "<<value;
		*front=*front+1;
		return;
	}

}
int main()
{
	int n,no,ch,front=-1,rear=-1;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	do
	{
		cout<<"\nenter 1 for insert \n enter 2 for delete \n else quit";
		cin>>no;
		if(no==1)
			insert(a,n-1,&front,&rear);
		else if(no==2)
			del(a,n-1,&front,&rear);
		cout<<"\nto stop press 0 else any button";
		cin>>ch;
	}while(ch);

	return 0;
}