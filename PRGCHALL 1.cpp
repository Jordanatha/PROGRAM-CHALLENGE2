#include <iostream>
using namespace std;

int main (){
	int numberGallons;
	int distance;
	
	cout << "Enter number of gallons : ";
	cin >> numberGallons;
	
	cout << "Enter distance traveled : ";
	cin >> distance;
	
	int distancePerGallon = distance / numberGallons;
	
	cout << "Miles per gallon is : " << distancePerGallon;
	
	return 0;	
}
