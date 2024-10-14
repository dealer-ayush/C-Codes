#include<stdio.h>
int main()
{
    int n,a[10]={0},i=0,r;
    printf("Enter no. : ");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%2;
        a[i]=r;
        i++;
        n=n/2;
    }
    for (i=9; i>=0; i--)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}