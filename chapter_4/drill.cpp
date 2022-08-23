#include "../std_lib_facilities.h"

int main()
{
    constexpr double m_to_cm = 100.0;
    constexpr double in_to_cm = 2.54;
    constexpr double ft_to_in = 12.0;

    string unit;
    double sum;
    double val;

    vector<double> length;

    cout << "Enter a number and unit or | to exit.\n";

    while (cin >> val >> unit)
    {
        if (unit == "cm")
        {
            length.push_back(val / m_to_cm);
        }
        else if (unit == "m")
        {
            length.push_back(val);
        }
        else if (unit == "in")
        {
            length.push_back(val * in_to_cm / m_to_cm);
        }
        else if (unit == "ft")
        {
            length.push_back(val * ft_to_in * in_to_cm / m_to_cm);
        }
        else
            cout << "Illegal input\n";

        cout << "\nEnter a number and unit or | to exit.\n";
    }

    sort(length);

    cout << "\nAll the values entered: ";

    for (double x : length)
    {
        sum += x;
        cout << x << ' ';
    }

    cout << '\n'
         << "The smallest is: " << length[0] << "m\n"
         << "The largest is: " << length[length.size() - 1] << "m\n"
         << "The number of values entered is: " << length.size() << '\n'
         << "The sum of values is: " << sum << "m\n";

    keep_window_open();

    return 0;
}