// Reccursion is a function which call itself.
// Last and first outcome.
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    a=add(a,b);
    printf("Result %d",a);
    return 0;
}
int add(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        add(++x,--y);
    }
}