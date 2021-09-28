#include <iostream>
using namespace std;
int main()
{
	long int n, a, i = 0, s = 0;
	cin >>n;
	while (n != 0) {
		if (n % 2 == 1) s += pow(10, i);
		n /= 2;
		i++;
	}
	cout<<s;
}