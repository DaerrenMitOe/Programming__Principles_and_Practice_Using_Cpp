#include "../std_lib_facilities.h"

int main()
{
    string first_name;
    double age;

    cout << "Please enter your first name and age\n";
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name
         << " (age " << age * 12 << " months)\n";
}
