#include<stdio.h>
int main()
{
	int a,b,temp,*p,*q;
	 printf("Enter Value of a ");
    scanf("%d", &a);
    printf("\nEnter Value of b ");
    scanf("%d", &b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nAfter swap a=%d",*p);
    printf("\nAfter swap b=%d",*q);
    return 0;
}
