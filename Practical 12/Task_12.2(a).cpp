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
#include<iostream>

using namespace std;

/*

Constructor Calling -> From Derived class to Base Class.

Constructor Execution -> From Base class to Derived Class.

*/

class A

{

    public:

    A()                                             // Thirdly calling class A constructor

    {

        cout<<"\n Class A Constructor execution....\n\n";

    }

};

class B: public A

{

    public:

    B()                                             // Secondly calling class B constructor

    {

        cout<<"\n Class B Constructor execution....\n\n"; 

    }

};

class C: public B

{

    public:

    C()                                             // Firstly calling class C constructor

    {

        cout<<"\n Class C Constructor execution....\n\n"; 

    }

};

int main()

{

    C obj;

    return 0;

}
