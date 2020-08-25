#include <iostream>
using namespace std;
int main()
{
	int num, count, fact;
	cout<<"Enter the number to find the factorial of\n";
	cin>>count;
	for(num=1, fact=1; num<=count; num++){
		fact=num*fact;
	}
	cout<<count<<"! = "<<fact;
}
