#include<iostream>
#include<string.h>
using namespace std;
class Student
{  
    string name,address;
    int rollno;
    long long phno;
    
    public:
    void assign(string n,int r,long long ph,string ad)
    { 
        name=n;
        rollno=r;
        phno=ph;
        address=ad;
    }
    void print()
    {  
        cout<<name<<" \t "<<rollno<<"\t\t"<<phno<<"\t"<<address<<endl;
    }
};

int main()
{ 
    Student t,s;
    t.assign("Sam",1,7986456676,"Dehradun");
    s.assign("John",2,8947575485,"Shimla");
    cout<<"Name\tRoll No.\tPhone no.\tAddress"<<endl;
    t.print();
    s.print();
     return 0;
}
