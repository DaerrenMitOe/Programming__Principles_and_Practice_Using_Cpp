#include "../std_lib_facilities.h"

int main()
{
    string operation;
    double num1, num2;

    cout << "Enter an operation and two numbers\n";
    cin >> operation >> num1 >> num2;

    if (operation == "+")
        cout << num1 + num2 << '\n';
    else if (operation == "-")
        cout << num1 - num2 << '\n';
    else if (operation == "*")
        cout << num1 * num2 << '\n';
    else if (operation == "/")
        cout << num1 / num2 << '\n';
    else if (operation == "plus")
        cout << num1 + num2 << '\n';
    else if (operation == "minus")
        cout << num1 - num2 << '\n';
    else if (operation == "mul")
        cout << num1 * num2 << '\n';
    else if (operation == "div")
        cout << num1 / num2 << '\n';
    else
        cout << "wrong operation\n";
}
