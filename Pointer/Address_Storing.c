#include<stdio.h>
int main()
{
    int a=10;
    int *p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("\n%d",a);
    printf("\n%d",&a);

    printf("\n%d",p);
    printf("\n%d",*p);

    printf("\n%d",q);
    printf("\n%d",&q);
    printf("\n%d",*q);
    printf("\n%d",**q);
    
    printf("\n%d",r);
    printf("\n%d",&r);
    printf("\n%d",*r);
    printf("\n%d",**r);
    printf("\n%d",***r);
    
    return 0;
}