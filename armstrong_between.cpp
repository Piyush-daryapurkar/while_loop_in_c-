#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
	int n = 1;
	while(n<=2000)
	{
		
		
	int t = n;
	int cod =0;
	int r;
	int arm=0;
	
	while(t>0)
	{
		cod++;
		t=t/10;
	}
	t = n;
	while(t>0)
	{
		r = t%10;
		arm = arm + pow(r,cod);
		t = t/10;	
		
	}
	if(arm==n)
	{
		cout<<n<<" Number is Armstrong"<<endl;
	}
	
	
		
		n++;
	}
 


	return 0;
}
