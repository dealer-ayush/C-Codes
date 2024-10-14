#include<stdio.h>
int prime(int);
int main()
{
    int lb,ub,j,x;
    printf("Enter range: ");
    scanf("%d",&lb);
    printf("Enter range: ");
    scanf("%d",&ub);
    printf("\nNumbers are");
    for(j=lb;j<=ub;j++)
    {
        x=prime(j);
        if(x==1)
        {
            printf("\n%d",j);
        }
    }
    return 0;
}
int prime(int n)
{
    int i,signal=1;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            signal = 0;
        }
    }
    return signal;
}