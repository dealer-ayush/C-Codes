#include<stdio.h>
int main()
{
    int a[5],b,i,sum=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("reverse array is: \n");
    for(i=4;i>=0;i--)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("Sum is: %d",sum);
    return 0;
}