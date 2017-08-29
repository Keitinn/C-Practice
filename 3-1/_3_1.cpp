// _3_1.cpp
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry;
	do{
		int month;
		cout << "‹Gß‚ð‹‚ß‚Ü‚·" << endl << "‰½ŒŽ‚Å‚·‚©:" ;
		cin >> month;

		if (month >= 3 && month <= 5)
			cout << "‚»‚ê‚Ít‚Å‚·" << endl;
		else if(month >= 6 && month <=8)
			cout << "‚»‚ê‚Í‰Ä‚Å‚·" << endl;
		else if(month >= 9 && month <= 11)
			cout << "‚»‚ê‚ÍH‚Å‚·" <<endl;
		else if (month == 12 || month == 1 || month == 2 )
			cout << "‚»‚ê‚Í“~‚Å‚·" << endl;

		cout << "‚à‚¤ˆê“xH YEEEYes/NEEENo:";
		cin >> retry;
	}
	while (retry == "Y"||retry == "y");

	cin.get();
	return 0;
}
