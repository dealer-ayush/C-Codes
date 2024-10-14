#include<stdio.h>
int main()
{
    int a[10],i,s,flag=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter element you want to search: ");
    scanf("%d",&s);
    printf("\nElement %d is present at ",s);
    for(i=0;i<=9;i++)
    {
        if(a[i]==s)
        {
            flag=1;
            printf("%d,",i+1);
        }
    }
    if(flag==0)
    {
        printf("Element not found.");
    }
    else{
        printf(" position.");
    }
    return 0;
}