#include<stdio.h>
int main()
{
    char a[]="anshuket",i=0;
    
    while(a[i]!='\0')      // != not equal
    {
        a[i]=a[i]-32;
        if(a[i]==85)
        {
            a[i]=75;
        }
        i++;
    }
    i=0;
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }  
    return 0;
}