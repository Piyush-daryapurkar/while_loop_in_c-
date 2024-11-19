#include<iostream>
using namespace std;
int main ()
{
	
	int i;
	int n=1;
	int c=0;
	
	cout<<"enter a num for cheak num prime or not : ";
	cin>>i;

	while(n<=i)
	{
		if(i%n==0)
		{
			c++;
		}
		n++;
	}
	if(c==2)
	{
		cout<<"Number is Prime, no of factors "<<c;
	}
	else
	{
		cout<<"Number is Not Prime, no of factors "<<c;
	}


	return 0;
}
