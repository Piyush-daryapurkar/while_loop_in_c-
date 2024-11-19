#include<iostream>
using namespace std;
int main ()
{
	int i=1;
	int n=100;
	int c=0;
	int t;
	while(i<=n)
	{
		if(i==1)
		{
			cout<<"1 is not prime number"<<endl;
		}
		else
		{
			t = i;
			int j=1;
			while(j<=t)
			{
				if(t%j==0)
				{
					c++;
				}
				j++;
			}
			
		}
		if(c==2)
		{
			cout<<t<<" is prime number"<<endl;
		}
		i++;
		c=0;
		t=0;
	}

	return 0;
}
