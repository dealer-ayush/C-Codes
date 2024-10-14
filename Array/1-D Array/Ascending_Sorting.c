#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    for(i=0;i<=4;i++)
    {
        printf("Enter element ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Ascending array is ");
    for(i=0;i<=4;i++)
    {
        if(i==4)
        printf("%d",a[i]);
        else
        printf("%d,",a[i]);
    }
    return 0;
}