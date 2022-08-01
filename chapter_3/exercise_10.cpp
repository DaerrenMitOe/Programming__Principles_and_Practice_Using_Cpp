#include "../std_lib_facilities.h"

int main()
{
    cout << "Operation Number Number\n";
    string operation;
    double num1;
    double num2;

    cin >> operation >> num1 >> num2;

    if (operation == "+")
        cout << num1 + num2;
    else if (operation == "-")
        cout << num1 - num2;
    else if (operation == "*")
        cout << num1 * num2;
    else if (operation == "/")
        cout << num1 / num2;
    else if (operation == "plus")
        cout << num1 + num2;
    else if (operation == "minus")
        cout << num1 - num2;
    else if (operation == "mul")
        cout << num1 * num2;
    else if (operation == "div")
        cout << num1 / num2;
    else
        cout << "wrong operation";
}
