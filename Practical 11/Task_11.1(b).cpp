#include <iostream>
using namespace std;

class parent{

    public:
    void display()
    {
        cout<<endl<<"hi welcome...."<<endl;
    }
    
};

class child:public parent{
    
}; 

int main()
{
    child c1;
    c1.display();

return 0;
}
