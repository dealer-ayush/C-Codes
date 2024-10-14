#include<stdio.h>
int main()
{
    int a[5],b,i,sum=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of input: %d",sum);
    return 0;
}