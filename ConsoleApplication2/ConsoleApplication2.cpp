#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    typedef struct student {
        int age;
        char name[20];
        char surname[20];
        int group;
        char patronymic[20];
    }ST;

    int k;
    cout << "Введіть кількість студентів: ";
    cin >> k;
    ST *students = new ST [k];
    for (int i = 0; i < k; i++) {
        cout << "Введіть вік студента: ";
        cin >> students[i].age;
        cout << "Введіть ім'я студента: ";
        cin >> students[i].name;
        cout << "Введіть фамілію студента: ";
        cin >> students[i].surname;
        cout << "Введіть по батькові студента: ";
        cin >> students[i].patronymic;
        cout << "Введіть групу студента: ";
        cin >> students[i].group;
        
    }

    for (int i = 0; i < k; i++) {
        cout << "Вік студента: " << students[i].age << endl;
        cout << "Ім'я студента: " << students[i].name << endl;
        cout << "Фамілія студента: " << students[i].surname << endl;
        cout << "По батькові студента: " << students[i].patronymic << endl;
        cout << "Група студента: " << students[i].group << endl;
    }
    
}


