#include<stdio.h>
int fact(int);
int main()
{
    int n,r;
    printf("Enter value of n ");
    scanf("%d",&n);
    printf("Enter value of r ");
    scanf("%d",&r);
    n=fact(n)/(fact(r)*fact(n-r));
    printf("Factorial of n = %d",n);
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=n;i>1;i--)
    {
        f=f*i;
    }
    return f;
}