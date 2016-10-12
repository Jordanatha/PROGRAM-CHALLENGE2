#include <iostream>
#include <cstring>
using namespace std;

int main (){
	string month1, month2, month3;
	int rainAmount1, rainAmount2, rainAmount3;
	
	cout << "Please input 3 months :\n";
	cin >> month1;
	cin >> month2;
	cin >> month3;
	
	
	cout << "Please input rainfall Amount : \n";
	cin >> rainAmount1;
	cin >> rainAmount2;
	cin >> rainAmount3;
	
	float average = (rainAmount1 + rainAmount2 + rainAmount3) / 3;
	
	cout << "The average is : " << average ;
	
	return 0;
	
	return 0;
}
