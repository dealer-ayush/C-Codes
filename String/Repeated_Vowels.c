#include <stdio.h>
int main()
{
    char ch[100];
    char v[5]={'a','e','i','o','u'};
    int f[5]={0},j;
    printf("Enter a string : \n");
    gets(ch);
    for(j=0;ch[j]!='\0';j++)
    {
        if(ch[j]=='a')
        {
            f[0]++;
        }
        else if(ch[j]=='e')
        {
            f[1]++;
        }
        else if(ch[j]=='i')
        {
            f[2]++;
        }
        else if(ch[j]=='o')
        {
            f[3]++;
        }
        else if(ch[j]=='u')
        {
            f[4]++;
        }
    }
    for(j=0;j<=4;j++)
    {
        if(f[j]>0)
        printf("\nVowel %c is repeated %d times.",v[j],f[j]);
    }
    return 0;
}