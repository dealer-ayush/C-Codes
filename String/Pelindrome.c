#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],length,i,signal=0;
    printf("Enter string: ");
    gets(a);
    length=strlen(a);
    length=length-1;
    for(i=length;i>=0;i--)
    {
        b[length-i]=a[i];
    }
    b[length+1]='\0';
    printf("Reverse string is: %s ",b);
    i=0;
    while (a[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            signal=1;
        }
        i++;
    }
    if(signal==0)
    {
        printf("\nString is pelindrome.");
    }
    else
    {
        printf("\nString is not pelindrome.");
    }
    return 0;
}