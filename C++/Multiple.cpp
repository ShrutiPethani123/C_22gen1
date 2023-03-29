#include<iostream>
using namespace std;

class A{

    public:
    void print()
    {
        cout<<"Classs A...."<<endl;
    }

    void msg()
    {
        cout<<"Msg from class A"<<endl;
    }
};

class B{

    public:
    void display()
    {
        cout<<"Classs B...."<<endl;
    }

    void msg()
    {
        cout<<"Msg from class B"<<endl;
    }
};


class C:public A , public B{


};


int main()
{
    C obj;
    obj.display();
    obj.print();
    // obj.msg();

    obj.A::msg();
    obj.B::msg();

    obj.B::display();


}