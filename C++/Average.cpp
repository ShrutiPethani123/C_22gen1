#include<iostream>
using namespace std;

class Avg{

    int n1,n2,n3;

    public:
    Avg(int n1,int n2, int n3)
    {
        this->n1 = n1;
        this-> n2 = n2;
        this-> n3=n3;

    }

    void calculate()
    {
        int avg = (n1+n2+n3)/3;
        cout<<"Average is: "<<avg<<endl;
    }

};

int main()
{
    Avg obj(1,4,5);
    obj.calculate();
    

}