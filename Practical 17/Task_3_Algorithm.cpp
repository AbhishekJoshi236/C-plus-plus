#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 1.
    int a[]={4,6,9,2,6,2,7};

    vector<int> v1(begin(a),end(a));
    cout<<"Content of Vector (V1): ";
    vector <int>::iterator p=v1.begin();
    while(p != v1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<endl;


    // 2.
    cout<<"Vector after sorting: ";
    sort(v1.begin(),v1.end());
    vector <int>::iterator q=v1.begin();
    while(q != v1.end())
    {
        cout<<*q<<" ";
        q++;
    }
    cout<<endl<<endl;


    // 3.
    cout<<"Vector after Reversing: ";
    reverse(v1.begin(),v1.end());
    vector <int>::iterator r=v1.begin();
    while(r != v1.end())
    {
        cout<<*r<<" ";
        r++;
    }
    cout<<endl<<endl;


    // 4.
    cout<<"Maximum Element of vector:: "<<*max_element(v1.begin(),v1.end())<<endl;


    // 5.
    cout<<"\nMinimum Element of vector:: "<<*min_element(v1.begin(),v1.end())<<endl<<endl;


    // 6.
    int x;
    cout<<"Enter a number to check its occurance: ";
    cin>>x;
    cout<<"Occurance of "<<x<<" in vector:: "<<count(v1.begin(),v1.end(),x)<<endl<<endl;


    // 7.
    int n=sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    cout<<"Array after Sorting: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<endl;


    // 8.
    int num;
    cout<<"Enter an element for Binary Search: ";
    cin>>num;
    if(binary_search(a, a+n, num) )
        cout<<num<<" exists in array.";
    else
        cout<<num<<" does not exists in array.";

    return 0;
}
