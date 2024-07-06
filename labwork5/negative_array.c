#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,a[100];
  
  printf("\nEnter the size:");
  scanf("%d",&n);
  
  printf("\nEnter the values:"); 
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  printf("\nGiven values are:");
  for(i=0;i<n;i++)
  {
    printf("a[%d]=%d \n",i,a[i]);
  }
  
  for(i=0;i<n;i++)
  {
    if(a[i]<0)
    {
       printf("negative value %d \n",a[i]);
    }   
  }
  getch();
}
