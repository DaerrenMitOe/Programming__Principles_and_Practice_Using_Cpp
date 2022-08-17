#include "../std_lib_facilities.h"

int main()
{
    string operation;
    double num1, num2;

    cout << "Please enter an operation and two numbers\n";
    cout << "Operation: ";
    cin >> operation;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

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

    keep_window_open();

    return 0;
}
