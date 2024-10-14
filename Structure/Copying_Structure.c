#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char fun(char);
struct class
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct class a,b;
    printf("Enter roll no. of student: ");
    scanf("%d",&a.roll);
    printf("Enter student name: ");
    scanf("%s",a.name);
    printf("Enter marks of student: ");
    scanf("%f",&a.marks);
    b.roll=a.roll;
    strcpy(b.name,a.name);
    b.marks=a.marks;
    printf("\nRoll no.= %d\nName = %s\nMarks = %.2f\n",b.roll,b.name,b.marks);
    printf("\nSize of a: %d",sizeof(a));
}
char fun(char name)
{
    struct class a,b;
    return name;
}