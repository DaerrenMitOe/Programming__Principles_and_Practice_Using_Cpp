#include "../std_lib_facilities.h"

int main()
{
    double val;
    string unit;

    constexpr double m_to_cm = 100;
    constexpr double in_to_cm = 2.54;
    constexpr double ft_to_in = 12;

    cout << "Enter  \n";

    while (cin >> val >> unit)
    {
        if (unit == "cm")
        {
            cout << val << unit << " == " << val / m_to_cm << "m\n"
                 << val << unit << " == " << val / in_to_cm << "in\n"
                 << val << unit << " == " << val / in_to_cm / ft_to_in << "ft\n\n"
                 << "Enter  \n";
        }
        else if (unit == "m")
        {
            cout << val << unit << " == " << val * m_to_cm << "cm\n"
                 << val << unit << " == " << val * m_to_cm / in_to_cm << "in\n"
                 << val << unit << " == " << val * m_to_cm / in_to_cm / ft_to_in << "ft\n\n"
                 << "Enter  \n";
        }
        else if (unit == "in")
        {
            cout << val << unit << " == " << val * in_to_cm << "cm\n"
                 << val << unit << " == " << val * in_to_cm / m_to_cm << "m\n"
                 << val << unit << " == " << val / ft_to_in << "ft\n\n"
                 << "Enter  \n";
        }
        else if (unit == "ft")
        {
            cout << val << unit << " == " << val * ft_to_in * in_to_cm << "cm\n"
                 << val << unit << " == " << val * ft_to_in * in_to_cm / m_to_cm << "m\n"
                 << val << unit << " == " << val * ft_to_in << "in\n\n"
                 << "Enter  \n";
        }
        else
        {
            cout << "unknow unit\n\n"
                 << "Enter  \n";
        }
    }

    keep_window_open();

    return 0;
}