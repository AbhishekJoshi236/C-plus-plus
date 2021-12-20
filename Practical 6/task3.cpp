#include<iostream>
#include<algorithm>
using namespace std;

int main()
{ 
  string s="moodle",b="ubuntu";
  cout<<"Reversing using reverse method"<<endl;
  reverse(s.begin(),s.end());
  cout<<s<<endl;
  cout<<"Reversing using reverse_iterator"<<endl;
  string::reverse_iterator i=b.rbegin();
  for(;i!=b.rend();i++)
     cout<<*i;
  cout<<endl;
	
  return 0;
}
  
