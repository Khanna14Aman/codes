#include<stdio.h>
#include<stdlib.h>
void insert_priority_queue();

struct priority_queue
{
	int data;
	int prn;
	struct priority_queue *next;

} *front=NULL, *rear=NULL;
void main()
{
    int c,ch;
   while(ch)
    {
    	printf("1 to continue");
    scanf("%d",&c);
   if(c==1)
	{
		insert_priority_queue();
	}
      printf("enter ch");
      scanf("%d",&ch);
    }
}

void insert_priority_queue()
{
	int value;
	int priority;
	struct priority_queue *p ,*temp ,*t;
	p = ((struct priority_queue*)malloc(sizeof (struct priority_queue)));
	printf("enter value and priority\n");
    scanf("%d%d",&value,&priority);
    p->data=value;
    p->prn=priority;
    t=NULL;
    temp=front;
    while(temp->next!=NULL)
    {
    	if(p->prn>=temp->prn)
    	{
    		t=temp;
    		temp=temp->next;
    	}
    	else 
    		break;

    }
    p->next=temp;
    t->next=p;
    if(front==NULL)
    {
    	front=p;
    }
}
