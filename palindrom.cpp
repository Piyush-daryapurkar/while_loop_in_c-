#include <iostream>
using namespace std;

int main()
{
    //pallindrom
    int num, orgNum, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    orgNum = num;

    while (num > 0) 
	{
        rem = num % 10;//1234
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (orgNum == rev) 
	{
        cout << orgNum << " is a palindrome number" << endl;
    }
	else {
        cout << orgNum << " is not a palindrome number " << endl;
    }
    
    return 0;
}