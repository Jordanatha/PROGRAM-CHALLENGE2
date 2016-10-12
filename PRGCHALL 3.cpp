#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int num1, num2, num3, num4, num5;
	
	cout << "Please input 5 test score : " << endl;
	
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	
	float average = (num1 + num2 + num3 + num4 + num5) / 5;
	
	cout << "The average of scores is : " << setprecision (1) << fixed << showpoint << average << endl;
}
