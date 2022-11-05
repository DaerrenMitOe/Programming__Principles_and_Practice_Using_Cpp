#include "../std_lib_facilities.h"

int main()
{
    vector<string> digit{
        "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    vector<string> spelled_out{
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string answer;
    int a;
    char op;
    vector<string> val(2);
    vector<double> num(2);

    cout << "Please enter two values and one operation\n\n";

    while (cin >> val[0] >> op >> val[1])
    {
        a = 0;
        for (int i = 0; i < val.size(); ++i)
        {
            for (int j = 0; j < digit.size(); ++j)
            {
                if (digit[j] == val[i])
                {
                    num[i] = j;
                    ++a;
                    break;
                }
                else if (spelled_out[j] == val[i])
                {
                    num[i] = j;
                    ++a;
                    break;
                }
            }
        }

        if (a == 2)
        {
            switch (op)
            {
            case '+':
                cout << "The sum of " << num[0] << " and " << num[1] << " is " << num[0] + num[1] << ".\n\n";
                break;
            case '-':
                cout << "The differenc of " << num[0] << " and " << num[1] << " is " << num[0] - num[1] << ".\n\n";
                break;
            case '*':
                cout << "The mutiplication of " << num[0] << " and " << num[1] << " is " << num[0] * num[1] << ".\n\n";
                break;
            case '/':
                cout << "The devision of " << num[0] << " and " << num[1] << " is " << num[0] / num[1] << ".\n\n";
                break;
            default:
                cout << "uff\n\n";
                break;
            }
        }
        else
        {
            cout << "wrong input.\n\n";
        }
    }
}