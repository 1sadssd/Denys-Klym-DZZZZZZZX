#include<iostream>
#include<Windows.h>
#include <algorithm>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    /*Створіть одномірний масив, де буде щонайменше 10 елементів, який зберігає номери 
     телефонів у форматі 38(...).......
Відсортуйте масив за зростанням числового значення номера телефону 
і виведіть на екран початковий і кінцевий списки.
*/
    string phone_numbers[10] = { "380401234567", "380972345678", "380923456789", "380464567890",
                                "380997644331", "380936443210", "380983654321", "380504654321",
                                "380936759022", "380497354321" };

    sort(phone_numbers, phone_numbers + 10);

    cout << "Початковий список номерів телефонів: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << phone_numbers[i] << endl;
    }
    cout << "\n";
    cout << "Кінцевий список номерів телефонів: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << phone_numbers[i] << endl;
    }

    return 0;
}