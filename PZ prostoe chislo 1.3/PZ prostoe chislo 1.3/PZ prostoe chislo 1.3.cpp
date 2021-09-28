#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int ch1, ch2, n = 0,m;
	cin >> ch1;
	for (int i = 2; i <= (ch1 / 2); i++) {
		if (ch1 % i == 0) n=1; break;
	}
	if (n == 1) cout << "Не является простым" << endl;
	else cout << " Простое число" << endl;
	n = 0;
	cin >> ch2;
	for (int i = 2; i <= (ch2 / 2); i++) {
		if (ch2 % i == 0) n = 1; break;
	}
	if (n == 1) cout << "Не является простым" << endl;
	else cout << " Простое число" << endl;
	m = min(ch1, ch2);
	for (m; m > 1; m--) { if (ch1 % m == 0 && ch2 % m == 0) n = m; break; }
	if (n > 1) cout << "Наибольший общий делитель " << m;
	else cout << "Наибольший общий делитель 1";
	return 0;
}

