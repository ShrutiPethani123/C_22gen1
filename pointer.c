/*
Pointer -> store the address of variable

*/

#include<stdio.h>

void main()
{
    int a=50;
    printf("\n%d",a); // 50
    printf("\n%d",&a); // address of a

    // int *p;
    // p=&a;

    int *p=&a;
    printf("\n%d",p); // address of a
    printf("\n%d",*p);  // 50

    *p=200;
    printf("\n%d",a);

    int **q=&p;
    printf("\n%d",&p);
    printf("\n%d",q);

    printf("\n%d",*q); // addreess of a / value of p
    printf("\n%d",**q); // 200


}

/*

1. Take one array from user using poiner and print that array using pointer.
2. using 1st program copy one array to another array using pointer.

    a - 5 8 9 6 2 3
    b - 5 8 9 6 2 3

3. Make one function for input the array. and print the array

-> inputArray(array,size)
-> printArray(array,size)


*/