#include<iostream>
using namespace std;
int main ()
{
	//WAP using loop to print sum of all odd no and even numbers individually
	int a=1,b=100;
	
	while(a<=b)
	{
		if(a%2==0)
		{
			cout<<a <<"is even"<<endl;
		}	
 	if(a%2==1)
		{
			cout<<a <<"is odd"<<endl;
		}
		a++;
	}
		
return 0;
}