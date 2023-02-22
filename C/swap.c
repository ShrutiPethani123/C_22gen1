#include<stdio.h>

void swap(int *x,int *y);

void  main()
{
    int a , b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    printf("\nBefore swap value of a and b is %d and %d",a,b);
    swap(&a,&b);
    printf("\nAfter swap value of a and b is %d and %d",a,b);
}

// void swap(int x,int y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
// }

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}