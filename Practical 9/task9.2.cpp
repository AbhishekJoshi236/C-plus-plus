#include<iostream>
using namespace std;

class Area
{
public:
      void area(int l,int b)
      {
       cout<<"Area of rectangle: "<<l*b<<endl;
      }
     void area(int a)
     {
       cout<<"Area of square: "<<a*a<<endl;
      }
};

int main()
{  
    Area r;
    r.area(9,7);
    r.area(5);
}
