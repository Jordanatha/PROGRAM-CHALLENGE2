#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int APrice = 15;
	int BPrice = 12;
	int CPrice = 9 ;
	int A, B, C;
	
	cout << "Tickets for class A : ";
	cin >> A;
	
	cout << "Tickets for class B : ";
	cin >> B;
	
	cout << "Tickets for class C : ";
	cin >> C;
	
	float total = A*APrice + B*BPrice + C*CPrice;
	
	cout << "The total earning this day is : "<< "$" << setprecision(2) << fixed << showpoint << total << endl;
	
	return 0;
}
