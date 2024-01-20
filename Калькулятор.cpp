#include <iostream>
using namespace std;

int main()
{
    int choose;
    double a;
    double b;
    setlocale(LC_ALL, "Rus"); 
    do
    {
    cout << "Выберите один из вариантов:" << endl;
    cout << "1. Сложить 2 числа" << endl;
    cout << "2. Вычесть первое из второго" << endl;
    cout << "3. Перемножить два числа" << endl;
    cout << "4. Разделить первое на второе" << endl;
    cout << "5. Возвести в степень N первое число" << endl;
    cout << "6. Найти квадратный корень из числа" << endl;
    cout << "7. Найти 1 процент от числа" << endl;
    cout << "8. Найти факториал из числа" << endl;
    cout << "9. Выйти из программы" << endl;
    cout << "Ваш выбор: ";
    cin >> choose;
    switch (choose)
    {
    case 1:
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Ответ: " << a + b << endl;
        cout << "-----" << endl;
        break;
    case 2:
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Ответ: " << a - b << endl;
        cout << "-----" << endl;
        break;
    case 3:
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Ответ: " << a * b << endl;
        cout << "-----" << endl;
        break;
    case 4:
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        if (b != 0.0)
        {
            cout << "Ответ: " << a / b << endl;
        }
        else
            cout << "Деление на 0 невозможно";
        cout << "-----" << endl;
        break;
    case 5:
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Ответ: " << pow(a, b) << endl;
        cout << "-----" << endl;
        break;
    case 6:
        cout << "Введите число: ";
        cin >> a;
        cout << "Ответ: " << sqrt(a) << endl;
        cout << "-----" << endl;
        break;
    case 7:
        cout << "Введите число: ";
        cin >> a;
        cout << "Ответ: " << a / 100 << endl;
        cout << "-----" << endl;
        break;
    case 8:
        cout << "Введите число: ";
        cin >> a;
        b = 1;
        for (double i = 1; i <= a; i++)
        {
            b *= i;
        }
        cout << "Ответ: " << b << endl;
        cout << "-----" << endl;
        break;
    } }while (choose != 9);
    return 0;
}