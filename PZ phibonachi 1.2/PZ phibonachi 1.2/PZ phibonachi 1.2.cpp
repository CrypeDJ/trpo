#include <iostream>
using namespace std;
int main()
{
    int n,a=1,b=0,f,ph=1;
    cin >> n;
    cout <<endl<< a<<"  ";
    for (int i = 1; i < n; i++) {
        f = a + b;
        cout << f <<"  ";
        b = a; a = f;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)  ph *= i;
    cout << ph;
    return 0;
}


