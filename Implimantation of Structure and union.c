#include<stdio.h>
union unionjob
{
	//defining a union 
	char name[32];
	float salary;
	int workerNo;	
}uJob;
struct structjob
{
	char name[32];
	float salary;
	int workerNo;
}sJob;
int main()
{
	printf("size of union=%d bytes",sizeof(uJob));
	printf("\nsize of structure=%d bytes",sizeof(sJob));
	return 0;
}
