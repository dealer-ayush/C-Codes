#include<stdio.h>
#include<string.h>
int main()
{
    char a[7]="ayush ";
    char b[8]="jaiswal";
    char c[14];
    int i=0,length;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    
    length=strlen(a);
    i=0;
    while(b[i]!='\0')
    {
        c[i+length]=b[i];
        i++;
    }
    c[i+length]='\0';

    printf("%s",c);
    return 0;
}