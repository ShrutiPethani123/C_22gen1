/*

swap two variable using function.


swap(int a , int b)
{

}

*/

#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void test(int *x,int*y)
{
    *x=*y+6;
    *y=*x+4;
}

void main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    // a=5 , b=6

    printf("\nBefore swap a= %d and b= %d",a,b);
    // swap(&a,&b);
    test(&a,&b);
    printf("\nAfter swap a= %d and b= %d",a,b);
}