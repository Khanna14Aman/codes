#include<stdio.h>
#include<string.h>
void push(char stack[], int top, int max, int item);
int pop(char stack[], int top, int max);
void main()
{
	int n;
	printf("enter size of string\n");
	scanf("%d",&n);
	char a[n], stack[n];
	int top =-1,i;
	printf("\n enter string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		push(stack,top,n,a[i]);
	}
	for(i=0;stack[i]!='\0';i++)
	{
		a[i]=pop(stack,top,n);
	}
}
void push(char stack[], int top, int max, int item)
{
	if(top==max-1)
	{
		printf("overflow\n");
		return;
	}
	top=top+1;
	stack[top]=item;
}
int pop(char stack[], int top, int max )
{
	if(top==-1)
	{
		printf("underflow\n");
		return 0;
	}
	int item;
	item=stack[top];
	top=top-1;
	return item;

}