#include <iostream>
using namespace std;

int main(){
	int moneySpent;
	
	cout << "How much money did you spent?";
	cin >> moneySpent;
	
	int minInsurance = 0.8 * moneySpent;
	
	cout << "The minimum payment for the insurance is :" << minInsurance << endl;
	
	return 0;
}
