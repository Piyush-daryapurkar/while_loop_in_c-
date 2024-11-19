#include<iostream>
using namespace std;
int main ()
{
		//to print all odd numbers in between upper range and lower to range.
	int l,h;
	cout<<"enter the starting range : ";
	cin>>l;
	
	cout<<"enter the highest range : ";
	cin>>h;
	
	while(l<=h)
	{
		if(l%2==1)
		{
			cout<<l<<endl;
		}
		l++;
	}

	return 0;
}
