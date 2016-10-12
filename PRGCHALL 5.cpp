#include <iostream>
using namespace std;

int main (){
	float numMale, numFemale;
	
	cout << "Please input total of male : ";
	cin >> numMale;
	
	cout << "Please input total of female : ";
	cin >> numFemale;
	
	float precentageOfMale = numMale / (numMale + numFemale);
	float precentageOfFemale = numFemale / (numMale + numFemale);
	
	cout << "Precentage of male is :  " << precentageOfMale << endl;
	cout << "Precentage of female is : " << precentageOfFemale << endl;
	
	return 0;
	}
