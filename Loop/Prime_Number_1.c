//prime number
#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter no. ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            s=1;
        }
    }
    if(s==0)
    {
        printf("No. is prime.");
    }
    else
    {
        printf("No. is not prime.");
    }
    return 0;
}