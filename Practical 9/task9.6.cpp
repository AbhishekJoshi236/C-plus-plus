#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n=1234; 
    cout<<endl;
    cout<<"Setting mimimum field width: "<<setw(5)<<n<<endl;
    cout<<"Filling With String: "<<setw(15)<<setfill('*')<<n<<endl;
   
}
