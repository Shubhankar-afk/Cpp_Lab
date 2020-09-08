#include <iostream>
using namespace std;
long long factorial(int x);
int main(){
	int i=0, count;
	long long fact;
	cout<<"Write the number to calculate factorial: ";
	cin>>count;
	fact=factorial(count);
	cout<<count<<"! = "<<fact;
}
long long factorial(int count){
	long long fact=1;
	for(int i=1; i<=count; i++)
		fact=fact*i;
	return fact;
}