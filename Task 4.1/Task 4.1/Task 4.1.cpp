#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void task1()
{
    srand(time(0));
    int row, column;
    cout << "Enter number of rows"<<" "; cin >> row;
    cout << "Enter number of columns"<<" "; cin >> column;
    int** arr = new int*[row];
    for (int i=0 ; i < row; i++) arr[i] = new int[column];
    

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout <<setw(5)<< arr[i][j] ;
        }
        cout << endl;
    }
    for (int i(0); i < row; i++) delete arr[i];
    delete arr;
    cout << endl;    
}

void task2() {
    srand(time(0));
    int row, column, sum=0, colvo = 0;
    cout << "Enter number of rows" << " "; cin >> row;
    cout << "Enter number of columns" << " "; cin >> column;
    int** arr = new int* [row];
    for (int i = 0; i < row; i++) arr[i] = new int[column];


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 201 - 100;
            sum += arr[i][j];
            colvo++;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
    cout << "Sum = " << sum << endl;
    cout << "Srednee = " << sum / colvo << endl;;
    for (int i(0); i < row; i++) delete arr[i];
    delete arr;
    cout << endl;
}

void task3() {
    srand(time(0));
    int row1, column1, row2, column2;
    cout << "Enter number of rows of the first matrix" << " "; cin >> row1;
    cout << "Enter number of columns of the first matrix" << " "; cin >> column1;
    cout << "Enter number of rows of the second matrix" << " "; cin >> row2;
    cout << "Enter number of columns of the second matrix" << " "; cin >> column2;
    if (column1 != row2) cout << "ERROR!!!" << endl; exit;
    int** arr1 = new int* [row1];
    for (int i = 0; i < row1; i++) arr1[i] = new int[column1];
    int** arr2 = new int* [row2];
    for (int i = 0; i < row2; i++) arr2[i] = new int[column2];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            arr1[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            arr2[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < column1; i++) cout << "/";
    cout << "Matrix 1"; for (int i = 0; i < column1; i++) cout << "/"; 
    cout << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << setw(5) << arr1[i][j] ;
        }
        cout << endl;
    }

    for (int i = 0; i < column2; i++) cout << "/";
    cout << "Matrix 2"; for (int i = 0; i < column2; i++) cout << "/";
    cout << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            cout << setw(5) << arr2[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < column2; i++) cout << "/";
    cout << "Matrix 3"; for (int i = 0; i < column2; i++) cout << "/";
    cout << endl;

    int el=0;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int t = 0; t < row2; t++) {
                el += (arr1[i][t] * arr2[t][j]);
            }
            cout << el << " ";
        }
        cout << endl;
    }

    for (int i(0); i < row1; i++) delete arr1[i];
    delete arr1;
    for (int i(0); i < row2; i++) delete arr2[i];
    delete arr2;
    cout << endl;
}

void task4() {
    srand(time(0));
    int row, column;
    cout << "Enter number of rows" << " "; cin >> row;
    cout << "Enter number of columns" << " "; cin >> column;
    int** arr = new int* [row];
    for (int i = 0; i < row; i++) arr[i] = new int[column];


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr[i][j] = rand() % 21 - 10;
            cout <<setw(5)<< arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

 
    int element, column1;
    bool yes_No;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            yes_No = false;
            element = arr[i][j];
            arr[i][j] = 101;
            for (int a = 0; a < row; a++) {
                for (int d = 0; d < column; d++) {
                    if (arr[a][d] == element) arr[a][d] = 101; yes_No = true;
                }
            }
            if (yes_No == false) arr[i][j] = element; 
        }
    }
    int n;
    for (int i = 0; i < row; i++) {
        column1 = column;
        n = 0;
        for (int j = 0; j < column1-n; j++) {
            if (arr[i][j] == 101) {
                for (int a = j; a < column; a++) {
                    arr[i][a] = arr[i][a + 1];
                }
                n++;
            }
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }

    for (int i(0); i < row; i++) delete arr[i];
    delete arr;
    cout << endl;
}




int main() {
    task1();
    task2();
    task3();
    task4();
    return 0;
}