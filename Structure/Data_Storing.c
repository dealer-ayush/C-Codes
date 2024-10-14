#include<stdio.h>
struct class
{
    int roll;
    char name[20];
    float bme,bce,phy,m2,bcme;
};
int main()
{
    struct class a[5];
    int i;
    for(i=0;i<=4;i++)
    {
        
            printf("Enter roll no. of student %d: ",i+1);
            scanf("%d",&a[i].roll);
            printf("Enter student %d name: ",i+1);
            scanf("%s",a[i].name);
            printf("Enter marks of M2: ");
            scanf("%f",&a[i].m2);
            printf("Enter marks of BCE: ");
            scanf("%f",&a[i].bce);
            printf("Enter marks of BCME: ");
            scanf("%f",&a[i].bcme);
            printf("Enter marks of BME: ");
            scanf("%f",&a[i].bme);
            printf("Enter marks of Physics: ");
            scanf("%f",&a[i].phy);
            printf("\n");
        
    }
    for(i=0;i<=4;i++)
    {
        printf("\nName= %s   Roll No.= %d\nMarks of student in all subjects are:-\nMarks of M2= %.2f,\nMarks of BCE= %.2f,\nMarks of BCME= %.2f,\nMarks of BME= %.2f,\nMarks of Physics= %.2f",a[i].name,a[i].roll,a[i].m2,a[i].bce,a[i].bcme,a[i].bme,a[i].phy);
        printf("\n");
    }
    return 0;
}