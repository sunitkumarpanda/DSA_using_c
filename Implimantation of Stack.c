#include<stdio.h>
#define MAXSISE 5
struct stack
{
	int stk[MAXSISE];
	int top;
}
typedef (STACK); 
STACK s;
void push(void);
int pop(void);
void disp(void);
void main()
{
	int choice;
	s.top=-1;
	do
	{
		push();
		printf("Do you want to continue(Type 0 or 1)?\n");
		scanf("%d",&choice);
	}
	while(choice==1);
    pop();
	disp();
}
void push()
{
	int num;
	if(s.top==(MAXSISE-1))
	{
		printf("\n stack is full");
		return ;
	}
	else
	{
		printf("\n Enter the element to push=");
		scanf("%d",&num);
		s.top=s.top+1;
		s.stk[s.top]=num;
	}
	return ;
}
int pop()
{
	int num;
	if(s.top==-1)
	{
		printf("\n poped element is=%d",s.stk[s.top]);
		s.top=s.top-1;
	}
	return(num);
}
void disp()
{
	int i;
	if(s.top==-1)
	{
		printf("\n stack is empty");
		return ;
	}
	else
	{
		printf("\n current stack is \n");
		for(i=s.top;i>-1;i--)
		{
			printf("%d\n",s.stk[i]);
		}
		printf("\n");
	}
}
