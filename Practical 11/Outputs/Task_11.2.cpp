#include<iostream>
using namespace std;

class mammals
{
    public:
    void print_mammals()
    {
        cout<<"I am mammals.  \n";
    }

};

class marine_animals
{
    public:
    void print_marine_mammals()
    {
        cout<<"I am marine mammals.  \n";
    }

};

class blue_whale: public mammals, public marine_animals
{
    public:
    void print_both()
    {
        cout<<"I belongs to both ht==the categories: Mammals as well as Marine Animals.  \n";
    }
};

int main()
{
    mammals obj1;
    marine_animals obj2;
    blue_whale obj3;

    obj1.print_mammals();           //1
    obj2.print_marine_mammals();    //2
    obj3.print_both();              //3     //4

    obj3.print_marine_mammals();            //4
    obj3.print_mammals();                   //4
    return 0;
}
