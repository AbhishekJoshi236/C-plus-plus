#include <iostream>
#include <map>
using namespace std;

int main()
{
    // 1.
    map <int,string> obj1 {{100,"Ajay"},{101,"Abhilash"},{102,"Wizard"}};


    //2.
    obj1.insert( {107,"John"}   );
    obj1.insert( {105,"Wizard"} );
    obj1.insert( {106,"Giant"}  );


    // 3.
    cout<<"Printing Map: "<<endl;
    map <int,string>:: iterator p=obj1.begin();
    while(p != obj1.end())
    {
       cout<<p->first<<"\t"<<p->second<<endl;
       p++;
    }
    cout<<endl;


    // 4.
    int key;
    cout<<"Enter a key to find: ";
    cin>>key;

    p=obj1.find(key);
    if(p == obj1.end())
        cout<<"Key not found...!\n";
    else
        cout<<"Key Found..!\n";
    


    // 5.
    map <int,string> obj2;
    obj2=obj1;
    cout<<"\nPrinting elements of obj2(second map) : "<<endl;
    map <int,string>:: iterator m=obj2.begin();
    while( m != obj2.end() )
    {
       cout<<m->first<<"\t"<<m->second<<endl;
       m++;
    }
    cout<<endl;


    // 6.
    cout<<"Enter a key to remove: ";
    cin>>key;

    p=obj1.find(key);
    obj1.erase(key);
    cout<<"Printing after removing key: \n";
    map <int,string>:: iterator c=obj1.begin();
    while(c != obj1.end())
    {
       cout<<c->first<<"\t"<<c->second<<endl;
       c++;
    }
    cout<<endl;


    //7.
    cout<<"Size of obj1(Map1): "<< obj1.size()<<endl;
    cout<<"Max Size of obj1(Map1): "<< obj1.max_size();
    cout<<endl;


    // 8.
    if(obj1.empty())                                   /*  0->not empty, 1-> is empty. */
        cout<<"\nMap is EMPTY.\n";
    else
        cout<<"\nMap is not EMPTY.\n";
    

    //9.
    obj1.clear();
    map <int,string>:: iterator q=obj1.begin();
    while( q != obj1.end() )
    {
       cout<<q->first<<"\t"<<q->second<<endl;
       q++;
    }

    if(obj1.empty())                               
        cout<<"\nMap is EMPTY.(After clearing)\n";
    else
        cout<<"\nMap is not EMPTY.(After clearing)\n";
        

    return 0;
}
