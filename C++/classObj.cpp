/*

1. Make one class Name Student and class have data members like name , age , roll_no , address , contact no and make two method setData() and displayData().

-> setdata() take input from user of all instance variable values 
-> displayData() print all the details of student.

-> Make 2 student object.

*/
#include<iostream>
using namespace std;

class Student{

    // data members
    char name[10]="ram";
    int age;
    int roll_no;
    char address[20];
    long int contact;
    string school_name;

    public:
    //getter setter
    string getSchoolName()
    {
        return school_name;
    }

    void setSchoolName(string name)
    {
        school_name=name;
    }

    char* getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        // age=a;
        this->age=age;
    }
    

    void setData()
    {
        // cout<<"Enter name: ";
        // cin>>name;   
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter roll no: ";
        cin>>roll_no;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter contact no: ";
        cin>>contact;
        cout<<"Enter school name: ";
        cin>>school_name;
    }

    void displayData()
    {
        cout<<"------------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Contact no: "<<contact<<endl;
    }

};

int main()
{

    Student s;
    s.setData();
    s.displayData();

    // Student s1;
    // s1.setData();
    // s1.displayData();
    s.setAge(23);
    s.displayData();
    cout<<"-------------------------"<<endl;
    cout<<" age : "<<s.getAge()<<endl;
    cout<<"Name: "<<s.getName()<<endl;
    cout<<"School: "<<s.getSchoolName()<<endl;
}