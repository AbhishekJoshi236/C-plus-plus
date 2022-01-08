#include<iostream>
using namespace std;

class Base
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }

        float add(float a, float b)
        {
            return(a+b);
        }
};

class Child: public Base
{
    public:
        float add(float a, float b)               //OVERRIDING
        {
            return (a+b+10);
        } 
};

int main()
{
    Base objB;
    Child objC;
    cout<<objC.add(2.2f,3.4f)<<endl;             //calling overridden method using child class object.
    cout<<objB.add(2.1f,3.1f);                   //calling overridden method using base class object.

    return 0;
}


/* Child class object can't be able to see the add function of Base class having 'int' and 'float' return type.  */ 
