#include<stdio.h>
int main()
{
    char a[50],i;
    printf("Enter String: ");
    gets(a);
    a[0]=a[0]-32;
    i=1;
    while(a[i]!='\0')   
    {
        if(a[i]==32)
        {
            a[i+1]=a[i+1]-32;
            i++;
        }
        i++;
    }
        printf("%s",a);
    return 0;
}