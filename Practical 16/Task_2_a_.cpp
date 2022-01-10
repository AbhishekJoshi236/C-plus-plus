#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter dividend and divisor: ";
    cin>>x>>y;
    
    try{
        cout<<"Try block execution...\n";
        if(y==0)
        {
            cout<<"Throwing error...\n";
            throw runtime_error("ERROR...\n");
        }

        int z=x/y;
        cout<< z;
    }
    catch(runtime_error& e)
    {
        cout<<"Catching Error...\n";
        cout<<"Enter a non-zero divisor next time..!\n";
    }

    return 0;
}
