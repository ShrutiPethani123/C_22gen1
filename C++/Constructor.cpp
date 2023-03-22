/*
constructor: 

use: intialize the value of instance variable

-> name is same as class name
-> no return type
-> whenever objectes are created at time constructor will call automatically

Types:

1. Default
2. parametrized
3. copy constructor


*/


#include<iostream>
using namespace std;

class Test{

    int a,b;

    public:
    Test()
    {
        a=5;
        b=10;
        cout<<"Default constructor Called!!!"<<endl;
    }

    // Test(int c,int d)
    // {
    //     this->a=c;
    //     b=d;
    //     cout<<"Parametrized Constructor called!!"<<endl;
    // }

    Test(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<"Parametrized Constructor called!!"<<endl;
    }

    Test(int a,int b,int c)
    {

    }

    Test(float a,float b)
    {

    }

    Test(int c,float d)
    {

    }

    Test(Test &t)
    {
        this->a = t.a;
        this->b = t.b;
    }

    ~Test()
    {
        cout<<"Destructor called"<<endl;
    }



    void display()
    {
        cout<<a<<" "<<b<<endl;
    }

};

int main()
{
    Test t1;
    t1.display();

    Test t2(2,4);
    t2.display();

    Test t3(t1);
    t3.display();
    
    return 0;
}