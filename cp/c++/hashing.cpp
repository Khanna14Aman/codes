#include<iostream>
using namespace std;
void insert(int a[], int n)
{
	int value,ind,temp;
	cout<<"\nenter value to insert";
	cin>>value;
	ind=value%n;
	temp=ind;
	int  t=0;
	while(a[ind]>0)
	{
		t=1;
		ind=(ind+1)%n;
		if(temp==ind)
			break;
	}
	if(t==0 || temp!=ind)
	{
		a[ind]=value;
		return;
	}
	else
	{
		cout<<"\narray is full";
		return;
	}
}
void display(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<"   "<<a[i];
	return;
}
void del(int a[], int n)
{
	int value,ind,flag=0;
	cout<<"\nenter the value which you want to delete";
	cin>>value;
	ind=value%n;
	int temp=ind;
	while(a[ind]>0 && a[ind]!=value)
	{
		ind=(ind+1)%n;
		if(temp==ind)
		{
			flag=1;
			break;
		}
	}
	if(a[ind]<=0 || flag==1)
	{
		cout<<"\nelement is not present in array";
		return;
	}
	if(a[ind]==value)
	{
		cout<<"\nelement found at location"<<ind;
		a[ind]=-1;
		return;
	}


}
void searching(int a[], int n)
{
	int value,temp,ind,flag=0;
	cout<<"\nenter value to be search";
	cin>>value;
	ind=value%n;
	temp=ind;
	while(a[ind]>0 && a[ind]!=value)
	{
		ind=(ind+1)%n;
		if(temp==ind)
		{
			flag=1;
			break;
		}
	}
	if(a[ind]<=0 || flag==1)
	{
		cout<<"\nelement is not present in array";
		return;
	}
	else
	{
		cout<<"\nelement is present at location"<<ind;
		return;
	}
}
int main()
{
	int n,i,ch,no;
	cout<<"\nenter size of an array";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		a[i]=0;
	do
	{
		cout<<"\nenter 1 for insert\nenter 2 for delete\nenter 3 for display\nenter 4 for searching\nother key to quit";
		cin>>no;
		if(no==1)
			insert(a,n);
		if(no==2)
			del(a,n);
		if(no==3)
			display(a,n);
		if(no==4)
			searching(a,n);

		cout<<"\nenter 0 to stop";
		cin>>ch;
	}while(ch);

	return 0;
}