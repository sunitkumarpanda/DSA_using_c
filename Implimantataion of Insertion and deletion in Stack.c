#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
void push();
void opp();
void traverse();
int is_empty();
int top_element();
int top=-1;



int main()
{
	int element,choice;
	while(1)
	{
		printf("stack oprations.\n");
		printf("1.insert into stack(push opration).\n");
		printf("2.delete form stack(pop opration).\n");
		printf("3.print top element of stack.\n");
		printf("4.cheack if stack is empty.\n");
		printf("5.traverse stack.\n");
		printf("6.exit.\n");
		printf("enter your choice.\n");
		scanf("%d",&choice);
		
		
		switch(choice)
		{
			case 1:
				if(top==MAX_SIZE-1)
				printf("error:overflow...!\n\n");
				else
				{
				printf("enter the value to insert.\n");
				scanf("%d",&element);
				push(element);
				}
				break;
				case 2:
				if(top==-1)
				printf("error:underflow.\n\n");
				else
				{
					element=pop();
					printf("element removed from stack%d\n\n",element);
				}
				break;
				case 3:
					if(!is_empty())
					{
						element=top_element();
					printf("element at the top of stack is%d\n\n",element);
				}
				
				{ 
					printf("stack is empty.\n\n");
				} 
				
				 break;
				 case 4:
					if(is_empty())
				 printf("stack is empty.\n\n");
				 else
			 	 printf("stack is not empty.\n\n");
				 break;
				 case 5:
					traverse();
					break;
					case 6:
					exit(0);
					}
				}
			}
			void push(int value)
		{
		top++;
		stack[top]=value;	
		}
		int  pop()
		{
		int element;
		if(top==-1)
		return top;
		else
		{
			element=stack[top];
			top--;
			return element;
		}
	}
	void traverse()
	{
		int d;
		if(top==-1)
		{
		printf("stack is empty.\n\n");
		}
		printf("there are %d elements in stack.\n\n",top+1);
		for(d=top;d>=0;d--)
		{
			printf("%d\n",stack[d]);
		}
		printf("\n");
	}
		int is_empty()
		{
			if(top==-1)
			return 1;
			else
			return 0;
		}
		int top_element()
		{
			return stack[top];
		}
	
