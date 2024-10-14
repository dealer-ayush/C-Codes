#include<stdio.h>
int add(int,int);
int sub(int,int);
int multi(int,int);
int div(int,int);
int mod(int,int);
int main()
{
    int p,q,r,s,t,a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    p=add(a,b);
    q=sub(a,b);
    r=multi(a,b);
    s=div(a,b);
    t=mod(a,b);
    printf("\nAddition = %d",p);
    printf("\nSubtraction = %d",q);
    printf("\nMultiplication = %d",r);
    printf("\nDivision = %d",s);
    printf("\nModulus = %d",t);
    return 0;
}
int add(int a, int b)
{
    a=a+b;
    return a;
}
int sub(int a, int b)
{
    a=a-b;
    return a;
}
int multi(int a, int b)
{
    a=a*b;
    return a;
}
int div(int a, int b)
{
    a=a/b;
    return a;
}
int mod(int a, int b)
{
    a=a%b;
    return a;
}