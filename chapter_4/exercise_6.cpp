#include "../std_lib_facilities.h"

int main()
{
    vector<string> digit{
        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    vector<string> spelled_out{
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string answer;

    cout << "Input: ";
    while (cin >> answer)
    {
        for (int i = 0; i < digit.size(); ++i)
        {
            if (digit[i] == answer)
            {
                cout << "Output: " << spelled_out[i] << "\n";
                break;
            }
            else if (spelled_out[i] == answer)
            {
                cout << "Output: " << digit[i] << "\n";
                break;
            }
        }
        cout << "\nInput: ";
    }

    keep_window_open()
    return 0;
}