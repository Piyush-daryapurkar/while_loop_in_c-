#include<iostream>
using namespace std;
int main ()
{
	// to print number is divisible by either 3,4 and 5 given range 1-50
	int l,h;
	cout<<"enter the starting range from : ";
	cin>>l;
	
	cout<<"enter the range to : ";
	cin>>h;
	
	while(l<=h)
	{
		if(l%3==0 and l%4==0 and l%5==0)
		{
			cout<<l<<endl;
		}
		l++;
	}
	



	return 0;
}
