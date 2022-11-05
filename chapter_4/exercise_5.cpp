#include "../std_lib_facilities.h"

int main()
{
    char op;
    double val1, val2;

    cout << "Please enter two values and one operation\n\n";

    while (cin >> val1 >> op >> val2)
    {
        switch (op)
        {
        case '+':
            cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << ".\n\n";
            break;
        case '-':
            cout << "The differenc of " << val1 << " and " << val2 << " is " << val1 - val2 << ".\n\n";
            break;
        case '*':
            cout << "The mutiplication of " << val1 << " and " << val2 << " is " << val1 * val2 << ".\n\n";
            break;
        case '/':
            cout << "The devision of " << val1 << " and " << val2 << " is " << val1 / val2 << ".\n\n";
            break;
        default:
            cout << "uff\n\n";
            break;
        }
    }

    keep_window_open();

    return 0;
}