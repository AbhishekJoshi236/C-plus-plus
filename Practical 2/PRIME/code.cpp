#include<iostream>
using namespace std;
int main()
{
	
int n,flag=0;
cout<<"Enter number: ";
cin>>n;
if(n==1 || n==0)
cout<<"Not a prime number.";
else{
for(int i=2;i<=n/2;i++)
{
	if(n%i==0)
	{
	cout<<"Not a prime number.";
	flag=1;
	break;
	}
}

if(flag==0)
	cout<<"Its is a prime number."<<endl;
}

return 0;
}
