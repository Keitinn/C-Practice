// _3_1.cpp
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry;
	do{
		int month;
		cout << "�G�߂����߂܂�" << endl << "�����ł���:" ;
		cin >> month;

		if (month >= 3 && month <= 5)
			cout << "����͏t�ł�" << endl;
		else if(month >= 6 && month <=8)
			cout << "����͉Ăł�" << endl;
		else if(month >= 9 && month <= 11)
			cout << "����͏H�ł�" <<endl;
		else if (month == 12 || month == 1 || month == 2 )
			cout << "����͓~�ł�" << endl;

		cout << "������x�H Y�E�E�EYes/N�E�E�ENo:";
		cin >> retry;
	}
	while (retry == "Y"||retry == "y");

	cin.get();
	return 0;
}
