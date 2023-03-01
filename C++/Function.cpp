/*

Function: block of code

Types:

2 type

1. Built in Function
2. User Define

    4 Types

    1. with r.t with arg
    2. with r.t without arg
    3. without r.t with arg
    4. without r.t without arg


1. Take one number from user and check the number is palindrom or not using function

    

*/

#include<iostream>
using namespace std;

bool check_palindrom(int n)
{
    int rem, rev=0;
    int tmp=n;

    while(n!=0)
    {
        rem= n%10;
        rev = rev*10 + rem;
        n=n/10;
    }

    if(tmp==rev)
    {
        return true;
    }else{
        return false;
    }

}


int main()
{
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    bool ans = check_palindrom(n);

    if(ans==true)
    {
        cout<<n<<" is palindrom"<<endl;
    }else{
         cout<<n<<" is  not palindrom"<<endl;
    }

}