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
	if(count==1)
		return 1;
	else
		return count*factorial(count-1);
}