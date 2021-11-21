#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string toString(int number);
string toString(long number);
string toString(float number);
string toString(long long number);
string toString(double number);
string toString(int number, int count);
string fracCorrection(int);
int numberInArray(int size, int number);
int numberInArray(string str, int number);

int main()
{
	int number = 123575;
	cout << "My " << toString(number, 3) << " " << "to string " << to_string(number) << endl;
	int size = 5, numeral = 6;
	cout << "\nAmount of numeral in array = " << numberInArray(size, numeral) << endl;
}

string toString(int number)
{
	if (number < 0)
	{
		return string("-") + toString(-number);
	}
	if (number < 10)
	{
		return string(1, number + '0');
	}
	return toString(number / 10) + toString(number % 10);
}

string toString(long long number)
{
	if (number < 0)
	{
		return string("-") + toString(-number);
	}
	if (number < 10)
	{
		return string(1, number + '0');
	}
	return toString(number / 10) + toString(number % 10);
}

string toString(long number)
{
	if (number < 0)
	{
		return string("-") + toString(-number);
	}
	if (number < 10)
	{
		return string(1, number + '0');
	}
	return toString(number / 10) + toString(number % 10);
}

string toString(float number)
{
	if (number < 0)
	{
		return string("-") + toString(-number);
	}
	float whole_temp;
	float frac_temp = modf(number, &whole_temp);
	int whole = whole_temp;
	int frac = int(frac_temp * 1000000);
	return toString(whole) + "." + fracCorrection(frac) + toString(frac);
}

string toString(double number)
{
	if (number < 0)
	{
		return string("-") + toString(-number);
	}
	float whole_temp;
	float frac_temp = modf(number, &whole_temp);
	int whole = whole_temp;
	int frac = int(frac_temp * 1000000);
	return toString(whole) + "." + fracCorrection(frac) + toString(frac);
}

string toString(int number, int count)
{
	string full_number = toString(number);
	string reduced_number;
	for (int i = 0; i < count; i++)
	{
		reduced_number += full_number[i];
	}

	return reduced_number;
}

string fracCorrection(int number)
{
	if (number == 0)
	{
		return "";
	}

	int zeros = 0;
	while (number < 100000)
	{
		number *= 10;
		zeros++;
	}

	string correction;
	for (int i = 0; i < zeros; i++)
	{
		correction += "0";
	}

	return correction;
}

int numberInArray(int size, int number) {
	srand(time(NULL));
	int amount = 0;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11;
		cout << arr[i];
		if (arr[i] == number) amount++;
	}

	return amount;
}

int numberInArray(string str, int number) {
	int amount = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == number) amount++;
	}
	return amount;
}