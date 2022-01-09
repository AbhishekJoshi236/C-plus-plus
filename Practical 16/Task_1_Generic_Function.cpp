#include <iostream>
using namespace std;

template <class X,class Y>
double add(X a,Y b)
{
    return (a+b);
}

int main()
{
    cout<<"Addition over two integers and return integer: "<< add(5,10)<<endl;
    cout<<"Addition over one int and one float and return double: "<< add(5,10.3f);

    return 0;
}
