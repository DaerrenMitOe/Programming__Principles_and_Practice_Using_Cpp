#include "../std_lib_facilities.h"

int main()
{
    char answer;

    int min = 1;
    int max = 100;
    int guess = 50;

    cout << "Think of a number between 1 and 100\n";
    while (min <= max)
    {
        int guess = (max + min) / 2;

        cout << "Is the number you are thinking of less than " << guess << "? (y/n)\n";
        cin >> answer;

        if (answer == 'y')
        {
            max = guess - 1;
        }
        else
        {
            min = guess + 1;
        }

        guess = (max + min) / 2;

        cout << "Is the number " << max << "? (y/n)\n";
        cin >> answer;

        if (answer == 'y')
        {
            cout << "Then " << max << " is your number." << '\n';
            break;
        }
    }

    keep_window_open();

    return 0;
}