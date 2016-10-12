#include <iostream>
using namespace std;

int main (){
	float celcius;
	
	cout << "Enter the celcius : ";
	cin >> celcius;
	
	float fahrenheit =  (9 * celcius / 5) + 32;
	
	cout << "The fahrenheit is : " << fahrenheit << endl;
	
	return 0;
}

