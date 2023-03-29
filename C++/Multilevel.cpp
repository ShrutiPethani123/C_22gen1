#include<iostream>
using namespace std;

class Animal{

    public:
    void eat()
    {
        cout<<"Eating!!!"<<endl;
    }
};

class Dog:public Animal{

    public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }
};

class Puppy:public Dog{

    public:
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
};

int main()
{
    Puppy p;
    p.sleep();
    p.bark();
    p.eat();

    Dog d;
    d.bark();
    d.eat();
    // d.sleep();

    Animal a;
    a.eat();

}