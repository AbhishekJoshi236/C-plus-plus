#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int choice;
    time_t now = time(0);

	cout<<"1.YEAR\n2.MONTH\n3.DAY\nEnter your choice: ";
	cin>>choice;	 

   	tm *a = localtime(&now);

	switch(choice)
	{
		case 1:	cout << "Year:" << 1900 + a->tm_year<<endl;
				break;
   		case 2: cout << "Month: "<< 1 + a->tm_mon<< endl;
   				break;
   		case 3:	cout << "Day: "<< a->tm_mday << endl;
   				break;
   		default: cout<<"INVALID INPUT\n";
   	}
}

