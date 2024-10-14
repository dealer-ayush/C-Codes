#include<stdio.h>
int main()
{
    int a;
    int *p;
    printf("Enter value ");
    scanf("%d",&a);
    p=&a;
    *p=(*p)+1;
    printf("%d",a);
    printf("\n%d",p);
    return 0;
}