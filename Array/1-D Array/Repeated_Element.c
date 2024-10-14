#include<stdio.h>
int main()
{
    int a[10],b[201]={0},i,c;
    for(i=0;i<=9;i++)
    {
        printf("Enter element ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        c=a[i];
        b[c]++;
    }
    for(i=0;i<=200;i++)
    {
        if(b[i]>0)
        {
            printf("\nElement %d is repeated %d times",i,b[i]);
        }
    }
    return 0;
}