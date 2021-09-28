#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    cout << "S = " << a * b<<endl; cout << "P = " << (a + b) * 2<<endl;
        for (int i = 0; i < a; i++) {
            for (int n = 0; n < b; n++) {
                cout << "* ";
            }
            cout << endl;
    }
    return 0;
}

