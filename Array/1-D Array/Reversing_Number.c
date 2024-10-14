#include<stdio.h>
#include<math.h>
int main()
{
    int a[10]={0},n1,n2,digit=0,r,i=0,rev=0;
    printf("Enter number");
    scanf("%d",&n1);
    n2=n1;
    while(n2>0)
    {
        n2=n2/10;
        digit++;
    }
    n2=n1;
    while(n2>0)
    {
        r=n2%10;
        a[i]=r;
        i++;
        n2=n2/10;
    }
    for(i=0;i<digit;i++)
    {
        rev=rev+a[i]*pow(10,digit-1-i);
    }
    printf("%d",rev);
    return 0;
}
//only 6 digit support