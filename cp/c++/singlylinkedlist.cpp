#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
} *head=NULL,*last=NULL;//global declaration so no need to use pass by value or pass by reference.
void insertatbeginning()
{
	int value;
	node *p= new node();
	cout<<"\n enter value";
	cin>>value;
	p->next=NULL;
	p->data=value;
	if(head==NULL)
	{
		head=p;
		last=p;
	}
	else
	{
		p->next=head;
		head=p;
	}
	return;
}
void insertatlast()
{
	int value;
	node *p= new node();
	cout<<"\nenter value";
	cin>>value;
	p->next=NULL;
	p->data=value;
	if(head==NULL)
	{
		head=p;
		last=p;
	}
	else
	{
		last->next=p;
		last=p;
	}
	return;
}
void insertafternode()
{
	int value,pos;
	node *p= new node();
    cout<<"\nenter value";
    cin>>value;
    cout<<"\nenter position";
    cin>>pos;
    p->next=NULL;
    p->data=value;
    if(head==NULL)
    {
    	head=p;
    	last=p;
    	return;
    }
    else
    {
    	node *t= head;
    	while(pos-1 > 0 && t->next!=NULL)
    	{
    		t=t->next;
    		pos--;
    	}
    	p->next=t->next;
    	t->next=p;
    	return;
    }
}
void deleteatbeginning()
{
	if(head==NULL)
	{
		cout<<"\nlist is empty";
		return;
	}
	else if(head->next==NULL)
	{
		node *d = head;
		head=NULL;
		last=NULL;
		delete d;
		return;
	}
	else
	{
		node *d= head;
		head=head->next;
		delete d;
		return;
	}
}
void deleteatlast()
{
	if(head==NULL)
	{
		cout<<"\nlist is empty";
		return;
	}
	else if(head->next==NULL)
	{
		node *d = head;
		head=NULL;//delete function always destroy the variable so we don't need to destroy head or last variable.
		last=NULL;//we need that head or last point NULL nedd not be destroyed.
		delete d;
		return;
	}
	else
	{
		node *d= head;
		while(d->next->next != NULL)
		{
			d=d->next;
		}
		last=d;
		d=d->next;
		last->next=NULL;
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
	else if(head->next==NULL)
	{
		node *d =head;
		head=NULL;
		last=NULL;
		delete d;
		return;
	}
	else
	{
		int pos;
		cout<<"\nenter position";
		cin>>pos;
		node *t,*d = head;
		if(pos==1)
		{
			head=head->next;
			delete d;
			return;
		}
		while(pos-1 > 0 && d->next!=NULL)
		{
			t=d;
			d=d->next;
			pos--;
		}
		t->next=d->next;
		if(d->next==NULL)
			last=t;
		delete d;
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
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	return;
}

int main()
{
	
	int n,ch;
	do
	{
		
		cout<<"press:\n1-insert at beginning\n2-insert at last\n3-insert after node\n4-display\n5-delete at beginning\n6-delete at last\n7-delete node\n";
		cin>>n;
		switch(n)
		{
			case 1: insertatbeginning(); break;
			case 2: insertatlast(); break;
			case 3: insertafternode(); break;
			case 4: display(); break;
			case 5: deleteatbeginning(); break;
			case 6: deleteatlast(); break;
			case 7: deletenode(); break;
			default : cout<<"enter valid no:";

		}
		cout<<"\npress 0 to stop or press 1 to continue";
		cin>>ch;

	}while(ch);
	
return 0;
}
