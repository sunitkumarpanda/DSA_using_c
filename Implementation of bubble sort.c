#include<stdio.h>
int main()
{
	int s,temp,i,j,a[20];
	printf("ENTER TOTAL NUMBER OF ELEMENTS: ");
	scanf("%d",&s);
	printf("enter%delements:",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[1]);
	}
		for(i=s-2;i>=0;i--)
		{
			for(j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("after sorting: ");
for(i=0;i<s;i++)
{
	printf("%d",a[i]);
}
return 0;
}
