#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100][100],i,j,size,max;
	printf("Enter your size: \n");
	scanf("%d",&size);
	printf("Enter your value: \n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	printf("given value: \n");
	for(i=0;i<size;i++)
	{  
		for(j=0;j<size;j++)
		{
			printf("a[%d][%d]=%d \n",i,j,a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0;i<size;i++)
	{  
		for(j=0;j<size;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}	
		}
	}
	printf("maximum value: %d",max);
	getch();
}


