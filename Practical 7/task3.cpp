#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"\nMatrix before reversing: \n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" "; 
		}
		cout<<"\n";	
	}
	
	cout<<"Matrix after reversing: \n";
	for(int i=2;i>=0;i--)
	{
		for(int j=2;j>=0;j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

return 0;
}
