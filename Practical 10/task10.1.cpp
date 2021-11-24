#include<iostream>
using namespace std;
class Details{
public:
  string name,ad,head;
  long long tn,mn;
  void print(int i)
  { cout<<i<<" "<<name<<"  "<<ad<<"    "<<tn<<"   "<<mn<<"  "<<head<<endl; }
};
int main()
{ Details s[2];
  for(int i=0;i<2;i++)
  {cout<<"Enter the name,address,telephone no.,mobile no.,Head of the family of person "<<i+1<<":"<<endl;
    cin>>s[i].name>>s[i].ad>>s[i].tn>>s[i].mn>>s[i].head; }
 cout<<"\n  Name\t  Address   Telephone no.  Mobile no.\tHead of the Family\n";
 for(int i=0;i<2;i++)
    s[i].print(i+1);
  return 0;
}
