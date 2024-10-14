#include<stdio.h>
#include<conio.h>

float add(float,float);
float sub(float,float);
float multi(float,float);
float div(float,float);
int modulus(int,int);

int main()
{
    float a,b;
    int c,d,choice;
    while(1)
    {
        printf("\nPress 1 for add. \nPress 2 for subtract. \nPress 3 for multiply. \nPress 4 for divide. \nPress 5 for modulus. \nPress any key for exit. \n");
        printf("\nPress a key: ");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("\nEnter number a: ");
            scanf("%f",&a);
            printf("Enter number b: ");
            scanf("%f",&b);
            printf("\nAddition of %.3f & %.3f = ",a,b);
            a=add(a,b);
            printf("%.3f\n",a);
        }
        else if (choice==2)
        {
            printf("\nEnter number a: ");
            scanf("%f",&a);
            printf("Enter number b: ");
            scanf("%f",&b);
            printf("\nSubtraction of %.3f by %.3f = ",a,b);
            a=sub(a,b);
            printf("%.3f\n",a);
        }
        else if(choice==3)
        {
            printf("\nEnter number a: ");
            scanf("%f",&a);
            printf("Enter number b: ");
            scanf("%f",&b);
            printf("\nMultiplication of %.3f & %.3f = ",a,b);
            a=multi(a,b);
            printf("%.3f\n",a);
        }
        else if (choice==4)
        {
            printf("\nEnter number a: ");
            scanf("%f",&a);
            printf("Enter number b: ");
            scanf("%f",&b);
            printf("\nDivision of %.3f by %.3f = ",a,b);
            a=div(a,b);
            printf("%.3f\n",a);
        }
        else if (choice==5)
        {
            printf("\nEnter only integer value.\n");
            printf("Enter number a: ");
            scanf("%d",&c);
            printf("Enter number b: ");
            scanf("%d",&d);
            c=modulus(c,d);
            printf("\nAfter dividing remainder = %d\n",c);
        }
        else
        {
            printf("Exiting...");
            break;
        }
    }
    return 0;
}
float add(float a,float b)
{
    a=a+b;
    return a;
}
float sub(float a,float b)
{
    a=a-b;
    return a;
}
float multi(float a,float b)
{
    a=a*b;
    return a;
}
float div(float a,float b)
{
    a=a/b;
    return a;
}
int modulus(int c,int d)
{
    c=c%d;
    return c;
}