#include<stdio.h>
struct class
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct class a[5];
    int i;
    float max,min;
    for(i=0;i<=4;i++)
    {
            printf("Enter roll no. of student %d: ",i+1);
            scanf("%d",&a[i].roll);
            printf("Enter student %d name: ",i+1);
            scanf("%s",a[i].name);
            printf("Enter marks %d: ",i+1);
            scanf("%f",&a[i].marks);
            printf("\n");
    }
    for(i=0;i<=4;i++)
    {
        printf("\nRoll No.= %d,  Name= %s,  Marks= %.2f",a[i].roll,a[i].name,a[i].marks);
        printf("\n");
    }
    max = a[0].marks;
    min = a[0].marks;
    for (i=0;i<5;i++)
    {
        if (a[i].marks > max)
        {
            max = a[i].marks;
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i].marks==max)
        {
            printf("\nThe maximum marks is %.2f and obtained by %s",max,a[i].name);
        }
    }
    for (i=0;i<5;i++)
    {
        if (a[i].marks < min)
        {
            min = a[i].marks;
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i].marks==min)
        {
            printf("\nThe minimum marks is %.2f and obtained by %s",min,a[i].name);
        }
    }
    return 0;
}