/*
structure 

1. user define datatype
2. collection of different data(different data type)

*/

#include<stdio.h>
#include<string.h>

struct Employee{

    int eid;
    char name[100];
    char designation[10];
    float salary;
    
};

void main()
{
    struct Employee e1,e2;
    
    e1.eid=1;
    e1.salary=45000.67980;
    // e1.name="joy"; - invalid
    strcpy(e1.name,"ram");
    strcpy(e1.designation,"developer");


    printf("\nEnter id:");
    scanf("%d",&e2.eid);
    printf("\n Enter name: ");
    scanf("%s",e2.name);
    printf("\n Enter Designation: ");
    scanf("%s",e2.designation);
    printf("\nEnter salary");
    scanf("%f",&e2.salary);

    printf("\nData of first employee");
    printf("\nId: %d",e1.eid);
    printf("\nName: %s",e1.name);
    printf("\nsalary: %.2f",e1.salary);
    printf("\nDesignation: %s",e1.designation);

    printf("\nData of Second employee");
    printf("\nId: %d",e2.eid);
    printf("\nName: %s",e2.name);
    printf("\nsalary: %.2f",e2.salary);
    printf("\nDesignation: %s",e2.designation);




}