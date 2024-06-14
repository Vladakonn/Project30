#include <iostream>


using namespace std;


float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a, b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        cout << "Ошибка: Деление на ноль!" << endl;
        return 0;
    }
    return a / b;
}

float modulo(float a, float b)
{
    if (b == 0)
    {
        cout << "Ошибка: Деление на ноль!" << endl;
        return 0;
    }
    return fmod(a, b);
}


float MakeDecision(float a, float b, float (operation)(float, float))
{
    return operation(a, b);
}

int main()
{
    setlocale(LC_ALL, "ru");
    float num1, num2;
    char operation;

    cout << "Калькулятор" << endl;
    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, , /, %): ";
    cin >> operation;

    cout << "Введите второе число: ";
    cin >> num2;


    float result;
    switch (operation)
    {
    case '+':
        result = MakeDecision(num1, num2, add);
        break;
    case '-':
        result = MakeDecision(num1, num2, subtract);
        break;
    case '*':
        result = MakeDecision(num1, num2, multiply);
        break;
    case '/':
        result = MakeDecision(num1, num2, divide);
        break;
    case '%':
        result = MakeDecision(num1, num2, modulo);
        break;
    default:
        cout << "Неверная операция!" << endl;
        return 1;
    }

    cout << "Результат: " << result << endl;

    return 0;
}