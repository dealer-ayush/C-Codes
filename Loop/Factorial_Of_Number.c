//factorial of a number
#include<stdio.h>
int main()
{
    int n,r=1,i;
    printf("Enter no. ");
    scanf("%d",&n);
    if(n>=0)
    {
        if(n==0 || n==1)
        {
        printf("Factorial is = %d",r);
        }
        else
        {
            for(i=n;i>=2;i--)
            {
                r=r*i;
            }
            printf("Factorial is =%d",r);
        }
    }
    else
    {
        printf("Input is incorrect.");
    }
    return 0;
}