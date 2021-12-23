#include<iostream>
using namespace std;

class A
{
    public: 
    void display()
    {
        cout<<"\n I am working fine...\n";
    }
};

class B: public A
{};

class C: public A
{};

class D: public B, public C
{};

int main()
{
    D obj;
    obj.display();
    
    return 0;
}
