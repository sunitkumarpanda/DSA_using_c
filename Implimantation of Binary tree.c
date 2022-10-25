#include<stdio.h>
#include<stdlib.h>
#define NODECOUNT 7

struct bstNode
{
	int data;
	struct bstNode*lchild,*rchild;
};

struct bstNode*root=NULL;
int bstData[]={100,80,120,70,90,110,130};
int count=0;
struct bstNode*implementBSTtree(int n)
{
	struct bstNode*newnode;
	if(n>=NODECOUNT)
	return NULL;
	
	newnode=(struct bstNode*)malloc(sizeof(struct bstNode));
	newnode->lchild=implementBSTtree((2*n)+1);
	newnode->data =bstData[n];
	newnode->rchild=implementBSTtree((2*n)+2);
	return newnode;
}
void preOrder(struct bstNode*myNode)
{
	if(myNode)
	{
		printf("%d",myNode->data);
		preOrder(myNode->lchild);
		preOrder(myNode->rchild);
	}
//	return 0;
	}
	void inOrder(struct bstNode*myNode)
	{
		if(myNode)
		{
			inOrder(myNode->rchild);
			printf("%d",myNode->data);
			inOrder(myNode->rchild);
		}
	//	return 0;
	}
	void postOrder(struct bstNode*myNode)
	{
		if(myNode)
		{
			postOrder(myNode->rchild);
			postOrder(myNode->rchild);
			inOrder(myNode->rchild);
		}
	//	return 0;
	}
	int main()
	{
		int i=0;
		printf("data in array:\n");
		while(i<NODECOUNT)
		{
			printf("%d",bstData[i]);
			i++;
		}
		i=0;
		root=implementBSTtree(i);
		printf("\nPre-Order:\n");
		preOrder(root);
		printf("\nIn-Order:\n");
		inOrder(root);
		
		printf("\nPost-Order:\n");
		postOrder(root);
		
		printf("\n");
		return 0;
	}
