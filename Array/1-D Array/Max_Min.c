#include<stdio.h>
int main()
{
    int a[10],max,min,i;
    for(i=0;i<=9;i++)
    {
        printf("Enter element ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
    }
    printf("Maximum Value %d &\nMinimum Value %d",min,max);
    return 0;
}