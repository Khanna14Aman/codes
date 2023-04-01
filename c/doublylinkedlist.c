#include<stdio.h>
#include<stdlib.h>
void create_doubly_linked_list();
void insert_at_beginning();
void insert_at_last();
void display();
void insert_at_specificpos();
void delete_from_beginning();
void delete_from_last();
void delete_specific_node();
struct doubly_linked_list
{
	int data;
	struct doubly_linked_list *prev,*next;
}*start=NULL,*last=NULL;
void main()
{
	int n,ch;
	do{
		printf("\n1-createlist\n2-insertatbeginning\n3-insertatlast\n4-display\n5-insertatspecificposition\n6-deletefrombeginning\n7-deletefromlast\n8-deletefromposition\n");
		scanf("\n%d",&n);
		switch(n)
		{
			case 1:
			{
				create_doubly_linked_list();
				break;
			}
			case 2:
			{
				insert_at_beginning();
				break;
			}
			case 3:
			{
				insert_at_last();
				break;
			}
			
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				insert_at_specificpos();
				break;
			}
			case 6:
			{
				delete_from_beginning();
				break;
			}
			case 7:
			{
				delete_from_last();
				break;
			}
			case 8:
			{
				delete_specific_node();
				break;
			}
			default :
			{
				printf("\n please select above mentioned numbers");
			}
		}
		printf("\npress 1 to continue/back to main menu otherwise press 0 for stop\n");
		scanf("%d",&ch);
	}while(ch);
}
void create_doubly_linked_list()
{
	int value,no;
	do{
		struct doubly_linked_list *p;
		p=(struct doubly_linked_list *)malloc(sizeof(struct doubly_linked_list));
		printf("\nenter value\n");
		scanf("\n%d",&value);
		p->data=value;
		p->next=NULL;
		p->prev=NULL;
		if(start==NULL)
		{
			start=p;
			last=p;
		}
		else
		{
			last->next=p;
			p->prev=last;
			last=p;
		}
		printf("\n wanna continue press 1 / wanna stop press0");
		scanf("\n%d",&no);
	}while(no);
}
void insert_at_beginning()
{
	int value;
	struct doubly_linked_list *p;
	p=(struct doubly_linked_list *)malloc(sizeof(struct doubly_linked_list));
	printf("\nenter value\n");
	scanf("\n%d",&value);
	p->data=value;
	p->next=NULL;
	p->prev=NULL;
	if(start==NULL)
	{
		start=p;
		last=p;
	}
	else
	{
	    p->next=start;
	    start->prev=p;
	    start=p;
	}
	
}
void insert_at_last()
{
	int value;
	struct doubly_linked_list *p;
	p=(struct doubly_linked_list *)malloc(sizeof(struct doubly_linked_list));
	printf("\nenter value\n");
	scanf("\n%d",&value);
	p->data=value;
	p->next=NULL;
	p->prev=NULL;
	if(start==NULL)
	{
		start=p;
		last=p;
	}
	else
	{
		p->prev=last;
	    last->next=p;
	    last=p;
	}
		
}
void display()
{
	struct doubly_linked_list *temp;
	temp=start;
	if(start==NULL)
	{
		printf("\nlist is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void delete_from_beginning()
{
	struct doubly_linked_list *temp;
	
	if(start==NULL)
	{
		printf("list is empty");
		return;
	}
	else if ((start==last) && start!=NULL)
	{
		temp=start;
		start=NULL;
		last=NULL;
	}
	else
	{
		temp=start;
		start=start->next;
		start->prev=NULL;
	}
	printf("deleted node is %d",temp->data);
	free(temp);
}
void insert_at_specificpos()
{
	int value, position;
	struct doubly_linked_list *p, *temp;
	p=(struct doubly_linked_list *)malloc(sizeof(struct doubly_linked_list));
	printf("\n enter position   if you give 1 it will automatically placed at 2\n");
	scanf("%d",&position);
	printf("\nenter value\n");
	scanf("%d",&value);
	temp=start;
	while(position-2>0 && temp->next!=NULL)
	{
		temp=temp->next;
		position=position-1;
	}
	if(temp==NULL)
	{
		p->data=value;
		p->next=NULL;
		p->prev=NULL;
	}
	else if(temp==last)
	{
		p->data=value;
		p->next=NULL;
		last->next=p;
		p->prev=last;
		last=p;
	}
	else
	{
		p->data=value;
		p->next=temp->next;
		temp->next->prev=p;
		temp->next=p;
		p->prev=temp;
	}
	
}
void delete_from_last()
{
	struct doubly_linked_list *temp;
	if(start==NULL)
	{
		printf("\nlist is empty\n");
		return;
	}
	else if((start==last) && start!=NULL)
	{
		temp=last;
		last=NULL;
		start=NULL;
	}
	else
	{
		temp=last;
		last=last->prev;
		last->next=NULL;
	}
	printf("deleted node is %d",temp->data);
	free(temp); 
}
void delete_specific_node()
{
	int n;
	struct doubly_linked_list *temp;
	if(start==NULL)
	{
		printf("\n list is empty\n");
	    return;
	}
	else if((start==last) && start!=NULL)
	{
		printf("\nThere is only one node so no need to do anything\n");
		temp=start;
		start=NULL;
		last=NULL;
	}
	else
	{
		temp=start;
		printf("\nenter position for position 1 please select delete from beginning option\n");
		scanf("%d",&n);
		while(n-1>0 && temp->next!=NULL )
		{
			temp=temp->next;
			n=n-1;
		}
		if(temp==last)
		{
			last=last->prev;
			last->next=NULL;
		}
		else
		{
				temp->next->prev=temp->prev;
		        temp->prev->next=temp->next;
        }
		
	}
	printf("\ndeleted node is %d",temp->data);
	free(temp);

}