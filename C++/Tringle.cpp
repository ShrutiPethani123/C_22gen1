#include<iostream>
using namespace std;

class Triangle{

    int side1 , side2 , side3;

    public:

    void setSide1(int side1){
        this->side1 = side1;
    }

    int getSide1()
    {
        return side1;
    }

    void setSide2(int side2){
        this->side2 = side2;
    }

    int getSide2()
    {
        return side2;
    }

    void setSide3(int side3){
        this->side3 = side3;
    }

    int getSide3()
    {
        return side3;
    }

    float area()
    {
        return side1*side2/2;
    }

    int perimeter()
    {
        return side1+side2+side3;
    }

};

int main()
{

    Triangle t;
    t.setSide1(3);
    t.setSide2(4);
    t.setSide3(5);

    cout<<"Area of Tringle is: "<<t.area()<<endl;
    cout<<"Perimeter of Tringle is: "<<t.perimeter()<<endl;

}