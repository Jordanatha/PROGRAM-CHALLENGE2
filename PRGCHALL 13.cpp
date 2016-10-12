#include <iostream>
using namespace std;

int main(){
	const float yenPerDollar = 98.93;
			  	euroPerDollar = 0.74;
	float dollar;
	
	cout << "Please input your dollar : ";
	cin >> dollar;
	
	float convertYen = dollar * yenPerDollar;
	float convertEuro = dollar * euroPerDollar;
	
	cout << "Yen  : " << convertYen << " Yen" << endl;
	cout << "Euro : " << convertEuro << "Euro" << endl;
}
