#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
      char name[10],section;
      int age,Year,marks;
      void assign(char *c,int m,char s)
      { 
            strcpy(name,c);
            marks=m;
            section=s;
      }
    
      int get()
      { 
          return marks;
      }
};

int main()
{
    char c[10],t;
    int m;
     Student s[5];
     for(int i=0;i<5;i++)
     {
       cout<<"Enter the Name,Marks,Section of student: "<<i+1<<endl;
       cin>>c>>m>>t;
        s[i].assign(c,m,t);
     }
    
    for(int i=0;i<5;i++)
     {
           cout<<"Marks of student- "<<i+1<<":"<<s[i].get()<<endl;
     }
    return 0;
}
