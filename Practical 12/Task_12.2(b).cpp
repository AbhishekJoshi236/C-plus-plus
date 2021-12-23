#include<iostream>
using namespace std;

/*
Destructor Calling -> From Derived class to Base Class.
Destructor Execution -> From Derived class to Base Class.
*/

class A                                                         // Secondly calling class A Destructor
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
    ~B()                                                        // Firstly calling class B Destructor
    {
        cout<<"\n Class B Desturctor execution....\n\n"; 
    }

};

int main()
{
    B obj;
    return 0;
}
