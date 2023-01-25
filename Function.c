/*

1. User define function
    1. with r.t with arg
    2. with r.t without arg
    3. without r.t without arg
    4. without r.t with arg

2. Built in Funtion
 - pintf()
 - scanf()


-> 1. with r.t with arg

int display(int x , int y)
{

}

-> 2. with r.t without arg

int display()
{

}

-> without r.t without arg

void add()
{

}

-> without r.t with arg

void add(int x , int y)
{

}


1. declaration
2. defination
3. calling




*/

#include<stdio.h>

void print();
void display()
{
    printf("Royal.....");
}

void main()
{
    display();
    print();

}

void print()
{
    printf("\nGood Morning");
}