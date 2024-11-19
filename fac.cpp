#include <iostream>
using namespace std;
int main()
{
	//factorial
	int i=1, x=1,e;
	cout<<"enter a num : ";
	cin>>e;
	while(i<=e)
	{
		x = x *i; 
		i++;
	}
	cout<<"fac is "<<x<<endl;

	return 0;

	
	

}