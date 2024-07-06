#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter your values: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	
	printf("Given values are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=%d \n",i,j,a[i][j]);
			sum=sum+a[i][j];
		}
		printf("sum=%d \n",sum);		
	}
	getch();
}
