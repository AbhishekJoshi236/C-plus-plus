#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught " << x;
 }
 catch (...) {
 cout << "Default Exception\n";
 }
 return 0;
}

/*
Reason for OUTPUT --> Since there is no catch block for catching instance of 'char' thrown by 'throw' keyword so, catch(...) block
will execute and handle the program accordingly.
*/  
