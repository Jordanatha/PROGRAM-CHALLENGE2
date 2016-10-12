#include <iostream>
using namespace std;

int main (){
	float oneWidget = 12.5;
	float palletweight;
	float totalweight;
	
	cout << "How much is the pallet weight?";
	cin >> palletweight;
	
	cout << "How much is the pallet with widgets?";
	cin >> totalweight;
	
	float widgetStacked = (totalweight - palletweight) / oneWidget;
	
	cout << "Total widget stacked is : " << widgetStacked;
	
	return 0;
}
