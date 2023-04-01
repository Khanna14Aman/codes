#include<stdio.h>
#include<stdlib.h>
void create_list();
void insert_at_beginning();
void insert_at_last();
void display();
void delete_at_beginning();
void delete_at_last();
struct circular_linked_list
{
	int data;
	struct circular_linked_list*next;
}*start=NULL,*last=NULL;
void main()
{
	int n,no;
	do{
	    printf("\n1-createlist\n2-insertatbeginning\n3-insertatlast\n4-display\n5-deleteatbeginning\n6-deleteatlast");
	    scanf("\n%d",&n);
	    switch(n)
	    {
		case 1:
		{
			create_list();
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
			delete_at_beginning();
			break;
		}
		case 6:
		{
			delete_at_last();
			break;
		}
		default:
		{
			printf("\nplease select above mentioned option\n");
		}
	    }
	    printf("\npress 1 for continue/back to main menu or press 0 for stop\n");
	    scanf("\n%d",&no);

	}while(no);
}
void create_list()
{
	int value,ch;
	do
	{
	struct circular_linked_list *p;
	p=(struct circular_linked_list*)malloc(sizeof(struct circular_linked_list));
	printf("\nenter value");
	scanf("\n%d",&value);
	p->data=value;
   	if(start==NULL)
	{
    
		p->next=NULL;
		start=p;
		last=p;
		start->next=start;
	}
	else
	{
		p->next=start;
		last->next=p;
		last=p;
	}
	printf("\nwanna continue press 1 or press 0 to stop\n");
	scanf("\n%d",&ch);
    }while(ch);
}
void insert_at_beginning()
{
	int value;
	struct circular_linked_list *p,*temp;
	p=(struct circular_linked_list*)malloc(sizeof(struct circular_linked_list));
	printf("\nenter value");
	scanf("\n%d",&value);
	
	if(start==NULL)
	{
		p->data=value;
		p->next=NULL;
		start=p;
		last=p;
		start->next=start;
	}
	else 
	{
		temp=start;
	    while(temp->next!=start)
	    {
		    temp=temp->next;
	    }
		p->data=value;
		p->next=start;
		start=p;
		last->next=start;
	}
	
}
void insert_at_last()
{
	int value;
	struct circular_linked_list *p,*temp;
	p=(struct circular_linked_list*)malloc(sizeof(struct circular_linked_list));
	printf("\nenter value");
	scanf("\n%d",&value);
	if(start==NULL)
	{
		p->data=value;
		p->next=NULL;
		start=p;
		last=p;
		start->next=start;
	}
	else
	{
		p->data=value;
		p->next=start;
		last->next=p;
		last=p;
	}
}
void display()
{
	struct circular_linked_list *temp;
    if(start==NULL)
    {
    	printf("\nlist is empty");
    }
    else
    {
    	temp=start;
    	while(temp->next!=start)
    	{
    		
    		printf("%d\t",temp->data);
    		temp=temp->next;
    	}
    	printf("%d\t",temp->data);
    }
}
void delete_at_beginning()
{
	struct circular_linked_list *temp;
	if (start==NULL)
	{
		printf("\nlist is empty");
		return;
	}
	else if(start->next==start)
	{
		temp=start;
		start=NULL;
		last=NULL;
	}
	else
	{
		temp=start;
		start=start->next;
		last->next=start;
	}
	printf("\ndelete node is %d",temp->data);
	free(temp); 
}
void delete_at_last()
{
	struct circular_linked_list *temp;
	if (start==NULL)
	{
		printf("\n list is empty");
		return;
	}
	else if(start->next=start)
	{
		temp=start;
		start=NULL;
		last=NULL;
	}
	else
	{
		temp=start;
		while(temp->next!=last)
		{
			temp=temp->next;
		}
		last=temp;
		temp=temp->next;
		last->next=start;
	}
	printf("\ndeleted node is %d",temp->data);
	free(temp);
}