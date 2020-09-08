#include <iostream>
using namespace std;
void swapFunction(int *ptrA, int *ptrB){
	int swap;
	swap=*ptrA;
	*ptrA=*ptrB;
	*ptrB=swap;
	cout<<"Values after swapping (inside function):\na = "<<*ptrA<<"\nb = "<<*ptrB<<endl;
}
int main(){
	int a=10, b=20;
	int *ptrA, *ptrB;
	ptrA=&a;
	ptrB=&b;
	cout<<"Values before swapping (inside main function):\na = "<<a<<"\nb = "<<b<<endl;
	swapFunction(&a, &b);
	cout<<"Values after swapping (inside main function):\na = "<<a<<"\nb = "<<b<<endl;
	return 0;
}