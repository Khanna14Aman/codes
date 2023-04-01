#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
}*head=NULL;//global declaration so head value always be updated. when variable is local then only need to pass by value or use pass by reference.
void insertatbeginning()
{
	int value;
	cout<<"\nenter value";
	cin>>value;
	node * p= new node();
	p->data=value;
	p->next=NULL;
	if(head==NULL)
	{
		head=p;
		head->next=head;
		return;
	}
	else
	{
		node * temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		p->next=head;
		head=p;
		temp->next=head;
		return;
	}
}
void display()
{
	if(head==NULL)
	{
		cout<<"\nlist is empty";
		return;
	}
	else
	{
		node * temp=head;
		while(temp->next!=head)
		{
			cout<<temp->data<<"\t";
			temp = temp->next;
		}
		cout<<temp->data;
		return;
	}
}
void insertatlast()
{
	int value;
	cout<<"\nenter value";
	cin>>value;
	node * p=new node();
	p->data=value;
	p->next=NULL;
	if(head==NULL)
	{
		head=p;
		head->next=head;
		return;
	}
	else
	{
		node * temp=head;
		while(temp->next!=head)
			temp=temp->next;
		temp->next=p;
		p->next=head;
		return;
	}
}
void insertafter()
{
	int value,pos;
	cout<<"\nenter value";
	cin>>value;
	cout<<"\nenter position";
	cin>>pos;
	node * p=new node();
	p->next=NULL;
	p->data=value;
	if(head==NULL)
	{
		head=p;
		head->next=head;
		return;
	}
	else 
	{
		node* temp=head;
		while(temp->next!=head && pos-1>0)
		{
			temp=temp->next;
			pos--;
		}
		if(temp->next==head)
		{
			temp->next=p;
			p->next=head;
			return;
		}
		else
		{
			p->next=temp->next;
			temp->next=p;
			return;
		}

	}
}
void deletelast()
{
	if(head==NULL)
	{
		cout<<"\nlist is empty";
		return;
	}
	node *d=head;
	if(head->next==head)
	{
		head=NULL;
		delete d;
		return;
	}
	else
	{
		node* t=NULL;
		while(d->next!=head)
		{
			t=d;
			d=d->next;
		}
		t->next=head;
		delete d;
		return;
	}
}
void deletebeginning()
{
	if(head==NULL)
	{
		cout<<"\nlist is empty";
		return;
	}
	node * d=head;
	if(head->next==head)
	{
		head=NULL;
		delete d;
		return;
	}
	else
	{
		node *temp=head;
		while(temp->next!=head)
			temp=temp->next;
		head=head->next;
		temp->next=head;
		delete d;
		return;
	}
}
void deletenode()
{
	if(head==NULL)
	{
		cout<<"\nlist is empty";
		return;
	}
	node *d=head;
	if(head->next==head)
	{
		cout<<"\nthere was only one node ";
		head=NULL;
		delete d;
		return;
	}
	else
	{
		int pos;
		node *t=NULL;
		cout<<"\nenter position";
		cin>>pos;
		if(pos==1)
		{
			node *temp=head;
			while(temp->next!=head)
				temp=temp->next;
			head=head->next;
			temp->next=head;
			delete d;
			return;
		}
		while(pos-1>0 && d->next!=head)
		{
			t=d;
			d=d->next;
			pos--;
		}
		if(d->next==head)
		{
			t->next=head;
			delete d;
			return;
		}
		else
		{
			t->next=d->next;
			delete d;
			return;
		}

	}
}
int main()
{
	int n,ch;
	do
	{
		cout<<"\n1-insert at beginning\n2-insert at last\n3-insert after\n4-display\n5-delete beginning\n6-delete last\n7-delete node\n";
		cin>>n;
		switch(n)
		{
			case 1: insertatbeginning(); break;
			case 2: insertatlast(); break;
			case 3: insertafter(); break;
			case 4: display(); break;
			case 5: deletebeginning(); break;
			case 6: deletelast(); break;
			case 7: deletenode(); break;
			default : cout<<"\nplease enter valid no";
		}
		cout<<"\npress 0 for stop or 1 to continue";
		cin>>ch;
	}while(ch);


	return 0;
}