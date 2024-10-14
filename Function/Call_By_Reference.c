#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter number a ");
    scanf("%d",&a);
    printf("Enter number b ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Swap will be (%d,%d)",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}