#include<iostream>
using namespace std;

int main()
{
	int count =0,c;
	for(int i=5;i>0;i--)
	{
		++count;
		for(int j=1;j<i;j++)
			cout<<" ";
			
		c=count;
		while(c!=0)
		{
			cout<<"*";
			c--;
		}
		cout<<"\n";
	}

return 0;
}
