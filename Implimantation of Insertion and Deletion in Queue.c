#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	printf("*****WELCOME TO QUEUE PROGRAM*****");
	while(1)
{
printf("\n1.INSERT ELEMENT TO INSERT IN QUEUE\n");
printf("\n2.DELETE ELEMENT FROM QUEUE\n");
printf("\n3.DISPLAY ALL ELEMENTS OF QUEUE\n");
printf("4.QUIT\n");
printf("ENTER YOUR CHOICE: ");
scanf("%d",choice);
switch(choice)
{
	    case 1:
		insert();
		break;
		case 2:
		delete();
		break;
		case 3:
		display();
		break;
		case 4:
		exit(1);
		default:
		printf("WRONG CHOICE\n");
		}
	}
}
void insert()
{
	int item;
	if(rear==MAX-1)
	printf("QUEU OVERFLOW\n");
	else
{
if(front==-1)
{
front=0;
printf("\nINSERT ELEMENT TO QUEUE: ");
scanf("%d",&item);
rear=rear+1;
queue_array[rear]=item;
}
}
}
void delete()
{
	if(front==-1 || front>rear)
{
printf("QUEUE UNDERFLOW\n");
return;
}
else
{
	printf("ELEMENT DELETE FROM QUEUE IS :%d\n",queue_array[front]);
	front=front+1;
}
}
void display()
{
	int i;
	if(front==-1)
	printf("QUEUE IS EMPTY\n");
	else
{
printf("QUEUE IS :\n");
for(i=front;i<=rear;i++)
{
printf("%d",queue_array[i]);
printf("\n");
}
}
}
