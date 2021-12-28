#include<iostream>
using namespace std;

/*
Destructor Calling -> From Derived class to Base Class.
Destructor Execution -> From Derived class to Base Class.
*/

class A                                                         // Thirdly calling class A Destructor
{
    public:
    ~A()
    {
        cout<<"\n Class A Desturctor execution....\n\n";
    }

};

class B: public A
{
    public:
    ~B()                                                        // Secondly calling class B Destructor
    {
        cout<<"\n Class B Desturctor execution....\n\n"; 
    }

};

class C: public B
{
    public:
    ~C()                                                        // Firstly calling class B Destructor
    {
        cout<<"\n Class C Desturctor execution....\n\n"; 
    }

};

int main()
{
    C obj;
    return 0;
}
