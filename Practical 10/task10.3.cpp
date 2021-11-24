#include<iostream>
using namespace std;
class Remainder
{ 
    int a,b,r;
    public: 
    Remainder(int a,int b)
    { 
        this->a=a;
        this->b=b;
        this->r=a%b;
    }
    int get()
    { 
        return this->r;
    }
};

int main()
{ 
    Remainder s(3,2);
    cout<<"Remainder of 3 and 2: "<<s.get()<<endl;
    return 0;
}
