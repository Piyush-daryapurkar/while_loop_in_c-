#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int n;
	cout<<"enter the range  : ";
	cin>>n;
	int b;
	cout<<"enter the ending range  : ";
	cin>>b;
	
	
	while(n<=b)
	{
		 
	
	    int t = n;
	    int cod =0;
	    int r=0;
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
		    cout<<n<<<"  "<<  "is Bahubali"<<endl;
	    }
	    n++;

	}
	
	return 0;
}
