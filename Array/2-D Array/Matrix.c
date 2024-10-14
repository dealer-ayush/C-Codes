#include<stdio.h>
int main()
{
   int a[3][3],i,j;
   // i=row, j=column
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i][j]);
    }
   } 
   printf("\nArray is: \n");
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }
   return 0;
}