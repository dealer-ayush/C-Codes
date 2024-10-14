// Function calling with parameter with function return value 
#include<stdio.h>
int add(int,int);
int main()
{
    int p,a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    p=add(a,b);
    printf("%d",p);
    return 0;
}
int add(int a, int b)
{
    a=a+b;
    return a;
}