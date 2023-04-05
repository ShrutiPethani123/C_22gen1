#include<iostream>
using namespace std;

class Employee{

    int salary,hour;

    public:

    void getInfo(int s1 , int h1)
    {
        salary =s1;
        hour= h1;
    }

    void addSalary()
    {
        if(salary<500)
        {
            salary += 10;
        }
    }

    void addWork()
    {
        if(hour>6)
        {
            salary = salary + 5;
        }
    }

    void printSalary()
    {
        addSalary();
        addWork();
        cout<<"Toatl salary is: "<<salary<<endl;
    }

};


int main()
{
    Employee e1;
    int salary, hour;
    cout<<"Enter salary: ";
    cin>>salary;
    cout<<"Enter hour: ";
    cin>>hour;

    e1.getInfo(salary,hour);
    // e1.addWork();
    // e1.addSalary();
    e1.printSalary();

}