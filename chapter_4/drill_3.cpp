#include "../std_lib_facilities.h"

int main()
{
    vector<int> num(2);

    cout << "Enter two numbers or | to exit.\n";

    while (cin >> num[0] >> num[1])
    {
        if (num[0] == num[1])
            cout << "The numbers are equal"
                 << "\n\nEnter two numbers or | to exit.\n";
        else
        {
            sort(num);
            cout << "The smaller value is: " << num[0]
                 << "\nThe larger value is: " << num[1]
                 << "\n\nEnter two numbers or | to exit.\n";
        }
    }
}