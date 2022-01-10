#include <iostream>
using namespace std;

void dividing(int x,int y)
{
    if(y==0)
    {
        cout<<"Throwing error...\n";
        throw ("Divisor is 0. Enter a non-zero number.");
    }

    int z=x/y;
    cout<<z;
}

int main()
{
    int x,y;
    cout<<"Enter dividend and divisor: ";
    cin>>x>>y;
    
    try{
        cout<<"Try block execution...\n";
        dividing(x,y);
    }

    catch(char const* s)
    {
        cout<<"Catching error...\n";
        cout<<"Error: "<<s;
    }

    return 0;
}
