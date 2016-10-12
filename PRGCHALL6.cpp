#include <iostream>
using namespace std;

int main (){
	float numOfCookies;
	float OneCookieSugar = 1.5 / 48;
	float OneCookieButter = 1.0 / 48.0;
	float OneCookieFlour = 2.75 / 48;
	
	cout << "How many cookies do you want to make?";
	cin >> numOfCookies;
	
	float totalSugar = OneCookieSugar * numOfCookies ;
	float totalButter = OneCookieButter * numOfCookies;
	float totalFlour = OneCookieFlour * numOfCookies;
	
	cout << "Total of sugar needed :" << totalSugar << endl;
	cout << "Total of butter needed :" << totalButter << endl;
	cout << "Total of flout needed :" << totalFlour << endl;
	
	return 0;
	
	
}
