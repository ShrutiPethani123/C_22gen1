/*

OOPS:

Inheritance:

Parent (Base , Super)
  |
Child (Derived , sub)

use: code reusability

Types of Inheritance:

1. single level

    A
    |
    B

2. Multi level

    A
    |
    B
    |
    C
    |
    D
    
3. Multiple 

    A   B
    \   /
      C

4. Hyrarchical

     A
    / \
    B  C

5. Hybrid

    A
    |
    B
   / \
  C   D
  |   |  
  E   F



*/

#include<iostream>
using namespace std;

class Parent{

    public:
    void car()
    {
        cout<<"Car...."<<endl;
    }

};

class Child:public Parent{

    public:
    void bike()
    {
        cout<<"Bike...."<<endl;
    }
};


int main()
{

    Parent p;
    p.car();
    // p.bike();

    Child c;
    c.car();
    c.bike();


}