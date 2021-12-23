#include<iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    A(int x)
    {
        a=x;
        cout<<"Value of a is: "<<a<<endl;
    }

};

class B: public A
{
    public:
    B():A(3)
    {   }

};

int main()
{
    B obj;
    return 0;
}
