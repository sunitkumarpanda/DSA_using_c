#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	
	printf("\n Enter Values for 1st Array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n a[%d][%d]=",i+j,i+j);
		    scanf("%d",&a[i][j]);
		}
	}
		printf("\n Enter Values for 2nd Array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n b[%d][%d]=",i+j,i+j);
		    scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of Matrix=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",c[i][j]);
			if(j==1)
			printf("\n");
		}
	}
return 0;	
	
}
