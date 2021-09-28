#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	long int x = 7;
	int a=85, b = 5, n, col;
	cout << "введите максимальное случайное число n (n > 0) "; cin >> n;
	cout << "введите количество случайных чисел "; cin >> col;
	for (int i = 0; i < 55; i++) cout<<"_";
	cout<<endl;
	for (int i = 1; i <= col; i++) {
		x = (a * x + b) % n;
		cout<<"|"<<x;
		for (int u = 0; u < x; u++) cout<<" ";
		cout<<"*"<<i<<endl;
	}
    return 0;
}