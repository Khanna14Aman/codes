#include<stdio.h>
#include<stdlib.h>
struct singly_linked_list
{
	int data;
	struct singly_linked_list * next;
}*start=NULL,*last=NULL;
void createlinkedlist();
void insertatbeginning();
void insertatlast();
void inserafterposition();
void display()
{
	struct singly_linked_list *p;
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		p=start;
	while(p!=NULL)
	{
	
		printf("%d \t",p->data);
		p=p->next;
	}
	}
	
}
void delete_first();
void delete_last();
void delete_specific_node();

void main()
{
	int n;
	int ch;
	
	
	do {
		printf(" please press \n 1-create\n2-insertbeginning\n3-insertlast\n4-display\n5-insertafterpositions\n6-delete from first\n7-delete from last\n8- delete speficic node\n");
	    scanf("%d",&n);
		switch (n)
	    {
		case 1:
		{
			createlinkedlist();
	        break;	
		}
		case 2:
		{
			insertatbeginning();
			break;
		}
		case 3:
		{
			insertatlast();
			break;
		}
		case 4:
		{
			display();
			break;
		}
		case 5:
		{
			inserafterposition();
			break;
		}
		case 6:
		{
			delete_first();
			break;
		}
		case 7:
		{
			delete_last();
			break;
		}
		case 8:
		{
			delete_specific_node();
			break;
		}
		default:
		{
			printf("please select above 4");
		}
	    }
	    printf("\n you want to continue press 1 for yes/back to main menu otherwise 0 for no\n");
        scanf("%d",&ch);
       }while(ch);   
     
}     
void createlinkedlist()
{
	int c,value;
	struct singly_linked_list *p;
	do {
		p=(struct singly_linked_list*)malloc(sizeof(struct singly_linked_list));
		printf("\nenter element");
		scanf("%d",&value);
		p->data=value;
		p->next=NULL;
		if(start==NULL)
		{
			start=p;
			last=p;
        }
        else
        {
        	last->next=p;
        	last=p;
        }
        printf("\n do you wanna continue 0for no/1 for yes");
        scanf("%d",&c);

	}while(c);
	
}
 void insertatbeginning()
 {
 	int value;
    struct singly_linked_list *p;
 	p=(struct singly_linked_list*)malloc(sizeof(struct singly_linked_list));
    printf("\n enter value");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;
    if(start==NULL)
    {
    	start=p;
    	last=p;
    }
    else
    {
    	p->next=start;
    	start=p;
    }
 }
 void insertatlast()
 {
   int value;
    struct singly_linked_list *p;
 	p=(struct singly_linked_list*)malloc(sizeof(struct singly_linked_list));
    printf("\n enter value");
    scanf("%d",&value);
    p->data=value;
    p->next=NULL;
    if(start==NULL)
    {
    	start=p;
    	last=p;
    }
    else
    {
    	last->next=p;
    	last=p;
    } 	
 }

void inserafterposition()
{
	struct singly_linked_list *p, *temp;
 	p=(struct singly_linked_list*)malloc(sizeof(struct singly_linked_list));
 	int pos,value;
 	printf("\n enter position");
 	scanf("%d",&pos);
 	temp=start;
 	while(pos-1>0 && temp->next!=NULL)
 	{
 		temp=temp->next;
 		pos=pos-1;
 	}
 	printf("\n enter value\n");
 	scanf("%d",&value);
 	p->data=value;
 	p->next=NULL;
 	if(temp==NULL)
 	{
 		start=p;
 		last=p;
 	}
 	else if(temp==last)
 	{
 		last->next=p;
 		last=p;
 	}
 	else
 	{
 		p->next=temp->next;
 		temp->next=p;
 	}
 		
}
void delete_first()
{
	struct singly_linked_list *t;
	if (start==NULL)
	{
		printf("\n list is empty\n");
	}
	else 
		{
			t=start;
	        start=start->next;
	        printf("\n deleted node is %d",t->data);
    	    free(t);
		}
}
void delete_last()
{
	struct singly_linked_list *t;
	if (start==NULL)
	{
		printf("\n list is empty\n");
	}
	else
	{
		t=start;
		while(t->next!=last)
		{
			t=t->next;
		}
		last=t;
		t=t->next;
		last->next=NULL;
		printf("\ndeleted node is %d",t->data);
		free(t);
	}

}
void delete_specific_node()
{
	struct singly_linked_list *t,*temp;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		int n;
		printf("\n enter no. of node you want to delete\n");
		scanf("%d",&n);
		temp=start;
		while(n-2>0)
		{
			temp=temp->next;
			n=n-1;
		}
		t=temp->next;
		temp->next=t->next;
		printf("\ndeleted node is %d ",t->data);
		free(t);
	}
}