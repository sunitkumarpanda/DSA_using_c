#include<stdio.h>
int main()
{
	int x=10,*p;
    p=&x;
    printf("\n the value of x=%d",x);
    printf("\n the value of x=%d",*p);
    printf("\n the address of x=%d",&x);
    printf("\n the address of x=%d",p);
    return 0;
}
