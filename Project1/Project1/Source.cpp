#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	double	a, b, c, r;
	cout << "������� ����� "; cin >> (x);
	if (x % 2 == 1)
	{
		cout << "��� ��������" << endl;
	}
	else {
		cout << "��� ������" << endl;
	}
	
	 
	a = x / 100;
	b = (x / 10) - (a * 10);
	c = x - (a * 100) - (b * 10);
	r = (a + b + c) / 3.;
	cout << r << endl;

	int mes;
	cout << "������� ����� ������ "; cin >> (mes);
	switch (mes) {
		case 1:
			cout << "January"<<endl;
			cout << "Winter" << endl;
			break;
		case 2:
			cout << "February" << endl;
			cout << "Winter" << endl;
			break;
		case 3:
			cout << "March" << endl;
			cout << "Spring" << endl;
			break;
		case 4:
			cout << "April" << endl;
			cout << "Spring" << endl;
			break;
		case 5:
			cout << "May" << endl;
			cout << "Spring" << endl;
			break;
		case 6:
			cout << "June" << endl;
			cout << "Summer" << endl;
			break;
		case 7:
			cout << "July" << endl;
			cout << "Summer" << endl;
			break;
		case 8:
			cout << "August" << endl;
			cout << "Summer" << endl;
			break;
		case 9:
			cout << "September" << endl;
			cout << "Autumn" << endl;
			break;
		case 10:
			cout << "October" << endl;
			cout << "Autumn" << endl;
			break;
		case 11:
			cout << "November" << endl;
			cout << "Autumn" << endl;
			break;
		case 12:
			cout << "December" << endl;
			cout << "Winter" << endl;
			break;
		default:
			cout << "Try again..."<<endl;
	}
	int q;
	cout << "������� ��� "; cin >> (q);
	if (q % 12 == 0) {
		cout << q << " ��� ��������" << endl;
	}
	else if (q % 12 == 1) {
		cout << q << " ��� ������" << endl;
	}
	else if (q % 12 == 2) {
		cout << q << " ��� ������" << endl;
	}
	else if (q % 12 == 3) {
		cout << q << " ��� ������" << endl;
	}
	else if (q % 12 == 4) {
		cout << q << " ��� �����" << endl;
	}
	else if (q % 12 == 5) {
		cout << q << " ��� ����" << endl;
	}
	else if (q % 12 == 6) {
		cout << q << " ��� �����" << endl;
	}
	else if (q % 12 == 7) {
		cout << q << " ��� ����(�������)" << endl;
	}
	else if (q % 12 == 8) {
		cout << q << " ��� �������" << endl;
	}
	else if (q % 12 == 9) {
		cout << q << " ��� ����" << endl;
	}
	else if (q % 12 == 10) {
		cout << q << " ��� ������" << endl;
	}
	else  {
		cout << q << " ��� ����" << endl;
	}
	system("pause");
	return 0;
}
