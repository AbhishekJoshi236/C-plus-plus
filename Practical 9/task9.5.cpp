#include<iostream>
using namespace std; 

struct student           //Structure has by default public mode as access modifier
{ 
    string sname;        //it is stored in stack
    char sec;           //it takes small part of memory than class
    int rn;
}s1;

class College
{
    string cname;       //Class has by default private mode but it also has 2 other access specifier
    public:
    College(string s)    //it is stored in Heap
    {  
        cname=s;            //it takes a large part of heap
    }
    void print(struct student s)
    {
        cout<<"Details of student"<<endl;
        cout<<"Name : "<<s.sname<<endl;
        cout<<"Roll no.: "<<s.rn<<endl;
        cout<<"Section: "<<s.sec<<endl;
        cout<<"College: "<<cname<<endl;
    }
};

int main()
{
    s1.sname="Bony";
    s1.sec='C';
    s1.rn=1;
    College c1("GEHU");
    c1.print(s1);
}
