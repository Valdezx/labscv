#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number;
	cout<<"Enter 3-number : "<<endl;
	cin>>number;
	
	if (number >= 100 && number <= 999) {
        int lastDigit = number % 10;
        int remainingDigits = number / 10;

        int newNumber = lastDigit * 100 + remainingDigits;

        cout << "number is: " << newNumber << std::endl;
    } else {
       cout << "wrong number." << std::endl;
    }
		
	return 0;
}