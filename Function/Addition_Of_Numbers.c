//Return value
#include<stdio.h>
int add();
int main()
{
    int x,y;
    x=add();
    y=add();
    printf("sum of x: ");
    printf("%d,\n",x);
    printf("sum of y: ");
    printf("%d",y);
    return 0;
}
int add()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    a=a+b;
    return a;
}