#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "Windows.h";
    
using namespace std;

struct student {
    int day;
    int month;
    int year;
    string name;
    string surname;
    string patronymic;
    int iq;
};

void sortStudents(int size, student* students) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (students[i].year > students[j].year) swap(students[i], students[j]);
        }
    }
}

string popular_name(student* students, int size) {
    int average, index, average_std = 0;
    for (int i = 0; i < size; i++) {
        average = 0;
        for (int j = 0; j < size; j++)
        {
            if (students[i].name == students[j].name) average++;
        }
        if (average_std < average) {
            average_std = average;
            index = i;
        }
    }
    return students[index].name;
}

int averageAge(int size, student* students) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (students[i].month <= 11) sum += 2021 - students[i].year;
        else sum += 2021 - students[i].year - 1;
    }
    return (sum / size);
}
void Students()
{
    int size = 7;
    student* students = new student[size];

    students[0] = { 1,2,2003,"Ivan","Ivanov","Ivanovich", 96 };
    students[1] = { 30,10,2004,"Vlad","Serov","Aleksandrovich",101 };
    students[2] = { 13,12,1975,"Donald","Tramp","Vladimirovich",115 };
    students[3] = { 7,3,2003,"Ivan","Butirin","Viktorovich",98 };
    students[4] = { 25,1,2004,"Alexey","Gromov","Viktorovich",130 };
    students[5] = { 12,4,2004,"Denis","Dolbich","Nikolaevich",103 };
    students[6] = { 17,8,2003,"Oleg","Ermol","Alexeevich",113 };
    for (int i = 0; i < size; i++)
        cout << setw(10) << students[i].surname << setw(10) << students[i].name << setw(15) << students[i].patronymic << setw(20) << students[i].day << "." << students[i].month << "." << students[i].year << setw(10) << "IQ:" << students[i].iq << endl;
   
    cout << popular_name(students ,size) << endl;

    sortStudents(size, students);
    for (int i = 0; i < size; i++)
        cout << setw(10) << students[i].surname << setw(10) << students[i].name << setw(15) << students[i].patronymic << setw(20) << students[i].day << "." << students[i].month << "." << students[i].year << setw(10) << "IQ:" << students[i].iq << endl;
   
    cout << averageAge(size,students) << endl;
}



int main() {
    
    Students();
    return 0;
}
