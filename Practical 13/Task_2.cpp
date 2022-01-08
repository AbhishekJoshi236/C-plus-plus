#include<iostream>
using namespace std;

class Base                              //3.    Abstract Class
{
    public:
        virtual int add()
        {
            return (1+1);
        }

        virtual int multiply()=0;       //Abstraction Implementated
};

class Child: public Base
{
    public:
        int add()                       //overriding
        {
            return (1+10);
        }

        int multiply()
        {
            return (1*5);
        }
};

int main()
{
    Base *p;
    Child objC;

    p=&objC;
    cout<<p->add()<<endl;               //1
    cout<<p->multiply()<<endl;          //2

    return 0;
}
