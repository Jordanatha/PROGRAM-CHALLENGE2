#include <iostream>
using namespace std;

int main(){
	int automobile, loan, insurance, gas, oil, tires, maintenance;
	
	cout << "Your payment for automobile : ";
	cin >> automobile;
	
	cout << "Your payment for loan : ";
	cin >> loan;
	
	cout << "Your payment for insurance : ";
	cin >> insurance;
	
	cout << "Your payment for gas : ";
	cin >> gas;
	
	cout << "Your payment for oil : ";
	cin >> oil;
	
	cout << "Your payment for tires : ";
	cin >> tires;
	
	cout << "Your payment for maintenance : ";
	cin >> maintenance;
	
	float totalMonthly = automobile + loan + insurance + gas + oil + tires + maintenance;
	float totalAnnual = totalMonthly * 12;
	
	cout << "Total u have to pay monthly is : " << totalMonthly << endl;
	cout << "Total u have to pay yearly is  : " << totalAnnual;
	
	return 0;
	
}
