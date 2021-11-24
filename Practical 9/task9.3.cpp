#include<iostream>
using namespace std;

class Count
{
   public:
      static int a;
      Count(int b)
      {
          a++;
      }
};

int Count::a=0;

int main()
{
    Count s(5),t(6),u(10);
    cout<<"Total number of calls for a member function: "<<Count::a<<endl;
}
