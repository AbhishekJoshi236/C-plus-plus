#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout<<"1.YEAR\n2.MONTH\n3.DATE\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout<<"2021\n";
				break;
		case 2: cout<<"OCTOBER\n";
				break;
		case 3: cout<<"13\n";
				break;
		default: cout<<"INVALID CHOICE\n";
	}	
	
	
	return 0;
}
