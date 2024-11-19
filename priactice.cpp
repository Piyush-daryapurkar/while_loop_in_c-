#include<iostream>
using namespace std;
int main ()
{
	int c=0,q=1,w=100;
	int n=1;
	int i=97;
	
	while(q<=w)
	{
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
		cout<<"Number is Prime, no of factors "<<n<<endl;
	}
	else
	{
		cout<<"Number is Not Prime, no of factors "<<i<<endl;
	}
	q++;
	}
	return 0;
}