#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("myinfo.txt");
    myfile<<"Hello everyone, Welcome to GEHU.\n";
    myfile.close();

    ifstream myfile1;
    string data;
    myfile1.open("myinfo.txt");
    getline(myfile1,data);
    cout<<data<<endl;
    myfile1.close();

    return 0;
}
