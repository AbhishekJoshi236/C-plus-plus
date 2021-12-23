#include<iostream>
using namespace std;

/*
Constructor Calling -> From Derived class to Base Class.
Constructor Execution -> From Base class to Derived Class.
*/

class A
{
    public:
    A()                                             // Secondly calling class A constructor
    {
        cout<<"\n Class A Constructor execution....\n\n";
    }

};

class B: public A
{
    public:
    B()                                             // Firstly calling class B constructor
    {
        cout<<"\n Class B Constructor execution....\n\n"; 
    }

};

int main()
{
    B obj;
    return 0;
}
