//multiplication table
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no. ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d",n,i,n*i);
        printf("\n");
    }
    return 0;
}