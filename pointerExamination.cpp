// Accessing the value of variables using poniters
#include<iostream.h>
int main(){
	int a;
	float b;
	int *p;
	float *q;
	a=10;
	b=20.5;
	p=&a;
	q=&b;
	cout<<"The value of a and b displayed without pointers are \n"<<a<<b;
	cout<<"The values of a and b displayed using poniters are\n "<< "  "<<*p<<"  "<<*q;
	return 0;
}
