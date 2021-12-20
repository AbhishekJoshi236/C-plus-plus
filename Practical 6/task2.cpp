#include<iostream>
using namespace std;

int main()
{ 
  string s;
  cout<<"Enter the string:";
  getline(cin,s);
	
  string::reverse_iterator i=s.rbegin();
  if(equal(s.begin(),s.end(),i))
      cout<<"Yes it is palindrome"<<endl;
 else
  cout<<"No it is not a palindrome"<<endl;
	
 return 0;
}
