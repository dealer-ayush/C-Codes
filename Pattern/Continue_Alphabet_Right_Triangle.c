//continue alphabet right triangle
#include<stdio.h>
int main()
{
    int n,i,j;
    int x=97;
    printf("Enter height of triangle ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}