#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void addLast(struct node **head, int val) 
{
//create a new node struct node 
struct node*newNode=malloc(sizeof(struct node)); 
newNode->data =val; 
newNode->next  =NULL;
//if head is NULL, it is an empty list
if(*head == NULL) 
   *head = newNode;
 //Otherwise, find the last node and add the newNode
else
{
struct node *lastNode = *head;
//last node's next address will be NULL.
while(lastNode->next!= NULL)
{
lastNode = lastNode->next;
}
//add the newNode at the end of the linked list 

lastNode->next = newNode;
}
}
void deleteNode(struct node **head, int key)
{
//temp is used to freeing the memory

struct node *temp;
//key found on the head node.

//move to head node to the next and free the head.
 
if((*head)->data == key)
{
temp = *head; //backup to free the memory
*head = (*head)->next;
free(temp);
}
else
{
struct node *current =*head;
 while(current->next!= NULL)
{
//if yes, we need to delete the current->next node 
if(current->next->data == key)
{
temp = current->next; 
//node will be disconnected from the linked list.
current->next = current->next->next; 
free(temp);
break;
//Otherwise, move the current node and proceed
}
else
current =current->next;
}
}
}
void printList(struct node *head)
{
struct node *temp = head;
//literate the entire linked list and print the data 
while(temp != NULL)
{ 
printf("%d", temp->data);
temp = temp->next; 
}
 printf("NULL\n");
}
int main()
{ 
struct node *head = NULL;
addLast(&head, 10);
addLast(&head, 20); 
addLast(&head,30); 
printf("Linked List Elements:\n");
printList(head);
//delete first node
deleteNode(&head, 10);
printf("Deleted 10. The New Linked List:\n"); 
printList(head);
//delete last node
deleteNode(&head,30);
printf("Deleted 30. The New Linked List:\n"); 
printList(head);
//delete 20
deleteNode(&head,20);
printf("Deleted 20. The New Linked List:\n");
printList(head);
return 0;

}
