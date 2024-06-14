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
        cout << "������: ������� �� ����!" << endl;
        return 0;
    }
    return a / b;
}

float modulo(float a, float b)
{
    if (b == 0)
    {
        cout << "������: ������� �� ����!" << endl;
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

    cout << "�����������" << endl;
    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� �������� (+, -, , /, %): ";
    cin >> operation;

    cout << "������� ������ �����: ";
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
        cout << "�������� ��������!" << endl;
        return 1;
    }

    cout << "���������: " << result << endl;

    return 0;
}