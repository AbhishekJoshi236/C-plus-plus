#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 1.
    vector<int> v1 {10,20,30,40,50};

    // 2.
    cout<<"Printing elements of vector: ";
    vector <int>::iterator p=v1.begin();
    while(p != v1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<endl;
    

    // 3.
    cout<<"Size of Capacity of Vector:: "<< v1.capacity() << endl;
    cout<<"Max Size of Vector:: "<< v1.max_size() << endl << endl;


    // 4.
    cout<<"New size of Vector after Resizing: ";
    v1.resize(3);
    cout<<v1.size()<<endl;
    vector <int>::iterator q=v1.begin();
    while(q != v1.end())
    {
        cout<<*q<<" ";
        q++;
    }
    cout<<endl<<endl;


    // 5.
    if(v1.empty())
        cout<<"Vector V1 is Empty";
    else
        cout<<"Vector V1 is not Empty";

    return 0;
}
