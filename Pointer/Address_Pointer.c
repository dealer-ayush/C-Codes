#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p = &a;
    printf("\n%d",a);
    printf("\n%d",&a);
    printf("\n%d",p);
    printf("\n%d",*p);
    *p=11;
    printf("\n%d",*p);
    return 0;
}