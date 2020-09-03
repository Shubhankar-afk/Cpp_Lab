#include<iostream>
using namespace std;
struct Student{
	string name;
	int roll;
	int assignment1;
	int assignment2;
	int internalMarks;
}details;
//A simple sum function
int total(int a, int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	cout<<"Name of student: ";
	getline(cin, details.name);
	cout<<"Roll number: ";
	cin>>details.roll;
	cout<<"Marks in assigmnent 1: ";
	cin>>details.assignment1;
	cout<<"Marks in assigmnent 2: ";
	cin>>details.assignment2;
	details.internalMarks=total(details.assignment1, details.assignment2);
	cout<<"Total internal marks : "<<details.internalMarks;
	return 0;
}