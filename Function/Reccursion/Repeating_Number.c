#include<stdio.h>
int y();
int x=0;
int main()
{
    int p;
    p=y();
    return 0;
}
int y()
{
    if(x==5)
    {
        return 0;
    }
    else
    {
        x++;
        y();
    }
    printf("%d ",x);
}