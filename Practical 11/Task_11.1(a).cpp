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
    public: 
    void setdata()
    {
        display();
    }
}; 

int main()
{
    child c1;
    c1.setdata();

return 0;
}
