#include <iostream>
using namespace std;
int main()
{
	int fact=0, i, j=0, num;
	int  factors[30];
	cout<<"Enter the number you want to check\n";
	cin>>num;
	for(i=1; i<=num; i++){
		if (num%i==0){
			fact++;
			if(i>1){
				factors[j]=i;
				j++;
			}
		}
	}
	if (fact==2)
		cout<<num<<" is a prime!";
	else{
		cout<<num<<" is not a prime!\nIts factors are:";
		for(i=0; i<j; i++){
			cout<<" "<<factors[i];
		}
	}
	return 0;
}