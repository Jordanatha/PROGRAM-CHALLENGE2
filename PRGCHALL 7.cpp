#include <iostream>
using namespace std;

int main (){
	float numOfAdult, numOfChild, grossProfit, netBoxProfit, amountPaid;
	string movieName;
	
	cout << "Movie name :";
	cin >> movieName;
	
	cout << "Adult tickets sold : ";
	cin >> numOfAdult;
	
	cout << "Child tickets sold : ";
	cin >> numOfChild;
	
	grossProfit = numOfAdult * 10 + numOfChild * 6;
	
	netBoxProfit = grossProfit * 0.2;
	
	amountPaid = grossProfit - netBoxProfit;
	
	cout << "Gross Box Office Profit		:" << grossProfit << endl;
	cout << "Net Box Office Profit 		:" << netBoxProfit << endl;
	cout << "Amount Paid to Distributor	:" << amountPaid << endl;
	
	return 0;
}
