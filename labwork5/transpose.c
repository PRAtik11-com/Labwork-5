#include<stdio.h> 
#include<conio.h> 
void main(){  
    int m,n,i,j,mat[50][50],c;  
    printf("Enter the number of rows: ");  
    scanf("%d", &m);  
    printf("Enter the number of columns: ");  
    scanf("%d", &n);
	   
    printf("Enter the number of the tanspose:\n");  
    for(i=0;i<m;i++)
	{  
        for(j=0;j<n;j++)
		{  
            scanf("%d", &mat[i][j]);  
        }  
    } 
	printf("the given number is: \n");  
	for(i=0;i<m;i++)
	{  
        for(j=0;j<n;j++)
		{  
            printf("a[%d][%d]=%d \n",i,j,mat[i][j]);  
        }  
    }  
    printf("\n");
    for(i=0;i<m;i++)
	{  
        for(j=0;j<n;j++)
		{  
            c = mat[i][j];  
            mat[i][j] = mat[j][i];  
            mat[j][i] = c;  
        }  
    }  
    printf("The transposed is:\n");  
    for(i=0;i<n;i++)
	{  
        for(j=0;j<m;j++)
		{  
            printf("%d ", mat[i][j]);  
        }  
        printf("\n");  
    }  
    getch();  
}  
