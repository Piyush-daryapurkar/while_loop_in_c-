#include<iostream>
using namespace std;
int main ()
{
	int i =1;
	int c =0;
	int n=1;
	
	while(i<=11)
	{
	 while(n<=i)
	    {
		if(i%n==0)
		{
			c++;
			cout<<n<<endl;
			
       	}
	if(c==2)
	{
		cout<<"Number is Prime "<<i<<endl;
	}
	else                       
	{
		cout<<"Number is Not Prime"<<i<<endl;
	}
    i++;                       
	}
	   
		
	
	
		
}