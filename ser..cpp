#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	float x =2;
	float n = 5;
	float i=0;
	float pw=0;
	float ans =0;
	float fact=0;
	int j=1;
	
	while (i<=n)
	{
		pw = pow(x,i);
		cout<<"Power value "<<pw<<endl;
		
		fact =1;
		if(i==0 || i==1)
		{
			fact = 1;
			cout<<"FACT VALUE is "<<fact<<endl;
		}
		else
		{
			while(j<=i)
			{
				fact = fact * j;
				j++;
			}
			cout<<"FACT VALUE is "<<fact<<endl;
		}
		
		ans  = ans + pw/fact;
		j=1;
		i++;
	
	}
	cout<<"ANS is "<<ans;



	return 0;
}


