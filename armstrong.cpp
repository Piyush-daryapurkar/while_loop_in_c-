#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"enter a number : ";
	cin>>n;
	int t=n;
	int cod=0;
	int r;
	int arm=0;
	
	
	
	while(t>0)
	{
		cod++;
		t=t/10;
		
	}
	cout<<cod<<endl;
	t=n;
	
	while(t>0)
	{
	   r=t%10;
	   arm=arm+pow(r,cod);
	   t=t/10;
	   	
	}
	cout<<arm<<endl;
	 
    if(arm==n)
    {
    	cout<<"armstrong";
	}
	else
	{
		cout<<"not armstrong";
	}
	
	
	
	
	
	
	
	return 0;
}