// _3_3_数字あてゲーム.cpp
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	do{
		srand(time(NULL));
		m = 0;
		int no = rand() % 100;
		int x;
		cout << "数当てゲーム開始！！" << endl;
		cout <<"0～99の数を当ててくだい\n";
		do{
			cout << "いくつかな:";
			cin >> x;
			m++;
			if (x > no)
				cout << "もっと小さな数字です\n";
			else if (x < no)
				cout << "もっと大きな数字です\n";
		}
		while(x != no);
		cout << "正解です" << endl;
		cout << "正解までに" << m << "手かかりました" << endl;
		cout << "繰り返す？\n1・・・はい/2・・・いいえ：\n";
		cin >> n;
	}
	while (n == 1);
	cin.get();
	return 0;
}
