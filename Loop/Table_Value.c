//table values
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no. ");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n)
    {
        printf("%d",i);
        printf("\n");
    }
    return 0;
}