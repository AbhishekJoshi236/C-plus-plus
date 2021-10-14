#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<5;i++)
	{
		int c=i;
		while(c!=0)
		{
			cout<<" ";
			c--;
		}	
		
		for(int j=i;j<5;j++)
		{
			cout<<"*";
		}
		
		cout<<"\n";
	}

return 0;
}
