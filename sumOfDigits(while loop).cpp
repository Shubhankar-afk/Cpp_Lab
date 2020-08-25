#include <iostream>
using namespace std;
int main()
{
	int num, count, remainder, sum=0;
	cin>>num;
	count=num;
	while (num!=0)	{
		remainder=num%10;
		sum=sum+remainder;
		num=num/10;
	}
	cout<<"Sum of "<<count<<" is "<<sum;
}
