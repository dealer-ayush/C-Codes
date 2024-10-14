#include<stdio.h>
int main()
{
    struct student_detail
    {
        int roll;
        char name[20];
    };
    struct student_detail_new
    {
        float marks;
        struct student_detail s;
    };
    struct student_detail_new e={45.1,12,"Ayush"};
    printf("Roll no. = %d\nName = %s\nMarks = %.2f",e.s.roll,e.s.name,e.marks);
}