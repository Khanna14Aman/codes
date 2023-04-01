#include<iostream>
using namespace std;
class priority
{
	public:
	int data,prn;
	priority *next;
}*head=NULL;
void insert()
{
	int value,pri;
	cout<<"\nenter value";
	cin>>value;
	cout<<"\nenter priority";
	cin>>pri;
	priority *p=new priority();
	p->data=value;
	p->prn=pri;
	p->next=NULL;
	priority *temp,*t=NULL;
	if(head==NULL)
	{
		head=p;
		return;
	}
	else if(head->next==NULL)
	{
		if(p->prn >= head->prn)
		{
			head->next=p;
			return;
		}
		else
		{
			p->next=head;
			head=p;
			return;
		}
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
			if(p->prn >= temp->prn)
			{
				t=temp;
				temp=temp->next;
			}
			else
				break;
		if(temp->next==NULL)
		{
			if(p->prn >= temp->prn)
			{
				temp->next=p;
				return;
			}
		}	
		if(t==NULL)
		{
			p->next=temp;
			head=p;
			return;
		}
		p->next=temp;
		t->next=p;
		return;	

	}
}
void del()
{
	priority *temp;
	if(head==NULL)
	{
		cout<<"\nqueue is empty";
		return;
	}
	if(head->next==NULL)
	{
		temp = head;
		head=NULL;
		cout<<"\ndeleted queue is "<<temp->data;
		delete temp;
		return;
	}
	else
	{
		priority *d=head;
		head=head->next;
		cout<<"\ndeleted queue is "<<d->data;
		delete d;
		return;
	}
}
void display()
{
	priority *temp=head;
	if(head==NULL)
	{
		cout<<"\nqueue is empty";
		return;
	}
	else
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->next;
		}
		return;
}
int main()
{
	int n,ch;
	do
	{
		cout<<"\nenter 1 for insert in priority queue\nenter 2 for delete in priority queue\nenter 3 for display\nelse quit";
		cin>>n;
		if(n==1)
			insert();
		if(n==2)
			del();
		if(n==3)
			display();
		cout<<"\nfor stop press 0 else any key";
		cin>>ch;


	}while(ch);



	return 0;

}