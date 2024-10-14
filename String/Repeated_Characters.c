#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000],c;
    int alpha[26]={0},digit[10]={0},count=0,i;
    printf("Enter a paragraph \n");
    gets(ch);
    for(i=0;ch[i]!='\0';i=i+1)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            c=ch[i];
            alpha[c-97]++;
        }
        else if(ch[i]>=48 && ch[i]<=57)
        {
            c=ch[i];
            digit[c-48]++;
        }
        else
        {
            count++;
        }
    }
    for(i=0;i<=25;i++)
    {
        if(alpha[i]>0)
        {
            printf("\nAlphabet %c is repeated %d times.",i+97,alpha[i]);
        }
    }
    printf("\n");
    for(i=0;i<=9;i++)
    {
        if(digit[i]>0)
        {
            printf("\nDigit %c is repeated %d times.",i+48,digit[i]);
        }
    }

    return 0;
}