#include<iostream>
using namespace std;

class Student
{
    string name;
    int age;
    int marks;
    public:
        Student(string s,int a,int m)
        {
            name=s;
            age=a;
            marks=m;
        }
        friend int Add(Student m);
};

int sum=0;

int Add(Student m)
{
    sum=sum+m.marks;
};

int main()
{
    Student s("Albert",18,35),t("Bony",19,20),u("Cia",21,19);
    Add(s);
    Add(t);
    Add(u);
    cout<<"Total sum of marks of 3 students is: "<<sum<<endl;
}
