#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught ";
 }
 return 0;
}

/*
Reason for OUTPUT --> Since there is no catch block for catching instance of char and  also there is no any default catch block, this is the
reason why our program is terminating abruptly.
*/ 
