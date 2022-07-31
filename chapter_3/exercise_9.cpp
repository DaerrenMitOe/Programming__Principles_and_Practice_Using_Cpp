#include "../std_lib_facilities.h"

int main()
{
    cout << "Converts spelled-out numbers to digits\n";
    string num;
    cin >> num;

    if(num == "zero")
        cout << "0";
    else if (num == "one")
        cout << "1";
    else if (num == "two")
        cout << "2";
    else if (num == "three")
        cout << "3";
    else if (num == "four")
        cout << "4";
    else
        cout << "not a number I know";
}