//No return value
#include<stdio.h>
int add();
int main()
{
    add();
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
    printf("Sum = %d",a);
}