#include <iostream>
using namespace std;
void swapFunction(int a, int b){
	int swap;
	swap=a;
	a=b;
	b=swap;
	cout<<"Values after swapping (inside function):\na = "<<a<<"\nb = "<<b<<endl;
}
int main(){
	int a=10, b=20;
	cout<<"Values before swapping (inside main function):\na = "<<a<<"\nb = "<<b<<endl;
	swapFunction(a, b);
	cout<<"Values after swapping (inside main function):\na = "<<a<<"\nb = "<<b<<endl;
	return 0;
}