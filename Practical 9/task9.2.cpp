#include <iostream>
using namespace std;

class area
{
    public:
        int l,b,s;
    

        area(int x)             
        {
            s=x;
        }
        area (int x,int y)      
        {
            l=x,b=y;
        }
        
        void area_cal(int s)       
        {
            cout<<"Area of Square is: "<<s*s<<endl;
        }

        void area_cal(int l,int b)       
        {
            cout<<"Area of Rectangle is: "<<l*b;
        }
};
int main()
{
    area sq(8),re(2,3);
    sq.area_cal(sq.s);
    re.area_cal(re.l,re.b);
    return 0;
}
