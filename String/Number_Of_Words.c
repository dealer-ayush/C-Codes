#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int count=0,i;
    printf("Enter a paragraph \n");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==32)
        {
            count++;
        }
        i++;
    }
    printf("No. of words = %d",count+1);
    printf("\nTotal no. of letters = %d",i-count);
    return 0;
}