#include <stdio.h>
#include <string.h>

struct Employee
{

    int eid;
    char name[100];
    char designation[10];
    float salary;

} e[3];

void main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter id:");
        scanf("%d", &e[i].eid);
        printf("\n Enter name: ");
        scanf("%s", e[i].name);
        printf("\n Enter Designation: ");
        scanf("%s", e[i].designation);
        printf("\nEnter salary");
        scanf("%f", &e[i].salary);
    }

    printf("-------------------------------------");

    for (int i = 0; i < 3; i++)
    {
        printf("\n--------------Data of %d employee-----------------",i);
        printf("\nId: %d", e[i].eid);
        printf("\nName: %s", e[i].name);
        printf("\nsalary: %.2f", e[i].salary);
        printf("\nDesignation: %s", e[i].designation);
    }
}
