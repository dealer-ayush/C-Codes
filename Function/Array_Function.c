#include<stdio.h>
void inc(int *);    //inc = increment
int main()
{
    int a[10]={0},i;
    for(int k=0;k<=9;k++)
    {
        printf("Enter elements: ");
        scanf("%d",&a[k]);
    }
    inc(a);
    printf("Elements after increment are as follows:-");
    for(i=0;i<=9;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
void inc(int *p)
{
    int j;
    for(j=0;j<=9;j++)
    {
        p[j]++;
    }
}