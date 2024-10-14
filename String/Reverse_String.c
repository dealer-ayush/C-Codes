#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],len,i,signal=0;
    printf("Enter String: ");
    gets(a);
    len =  strlen(a);
    len = len-1;
    for(i=len;i>=0;i--)
    {
        b[len-i]=a[i];
    }
    b[len+1]='\0';
    printf("Reverse string is: %s ",b);
    return 0;
}