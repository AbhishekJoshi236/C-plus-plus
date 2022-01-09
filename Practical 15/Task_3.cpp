#include<iostream>
#include<ios>
#include<iomanip>
#include<sstream>
using namespace std;
int main()
{
    //IOS
    int z=50;
    cout<<endl<<endl<<"Hexadecimal Value of a: "<< hex << z << endl;
    cout<<"Decimal Value of a: "<< dec << z << endl;

    char a,b,c,d,e,f;
    std::istringstream s ("   978");
    s >> std::skipws >> a >> b >> c;
    cout <<"Using skiwps:"<< a  << b << c << endl;

    std::istringstream p ("   978");
    p >> std::noskipws >> a >> b >> c >> d >> e >> f;
    cout <<"Using noskiwps:"<< a  << b << c << d  << e << f << endl;
    cout<<endl;


    // Istream
    std::istringstream q("      Enjoying college life.");
    string str1;
    getline(q >> ws, str1);
    cout <<"Using ws:"<< str1 << endl;
    cout<<endl;


    //Ostream
    cout<<"This is the first line.";
    cout<<"This is the second line."<<endl;
    cout<<"This is the third line."<<ends;
    cout<<"This is the fourth line."<<flush;
    cout<<endl<<endl;


    //Iomanip
    double num=26.9867538291873;
    cout<<"Using setw(20):"<< setw(20) << num << endl;
    cout<<"Using setprecision(10):" << setprecision(10) << num;

    return 0;
}
