#include<stdio.h>
int main()
{
    int a[10],s,i;
    //s=searching element
    for(i=0;i<=9;i++)
    {
        printf("Enter element ");
        scanf("%d",&a[i]);
    }
    printf("Enter element you want to search ");
    scanf("%d",&s);
    for(i=0;i<=9;i++)
    {
        if(a[i]==s)
        {
            break;
        }
    }
    if(i==10)
    {
        printf("Element is not present.");
    }
    else
    {
        printf("Element is present at %d position.",i+1);
    }
    return 0;
}