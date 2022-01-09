#include <iostream>
#include <list>
using namespace std;

int main()
{
    //  1.
    list <int> l1{1,4,6,2,4,8};
    list <int>::iterator p=l1.begin();
    cout<<"1. Printing List: ";
    while(p != l1.end())
    {
        cout<<*p<<" ";
        p++;
    }


    // 2.
    cout<<endl<<"2. Size of List is: "<<l1.size();


    // 3.
    l1.sort();
    cout<<endl<<"3. List after Sorting: ";
    list <int>::iterator q=l1.begin();
    while(q != l1.end())
    {
        cout<<*q<<" ";
        q++;
    }


    // 4.
    l1.reverse();
    cout<<endl<<"4. List after Reversing: ";
    list <int>::iterator r=l1.begin();
    while(r != l1.end())
    {
        cout<<*r<<" ";
        r++;
    }

    return 0;
}
