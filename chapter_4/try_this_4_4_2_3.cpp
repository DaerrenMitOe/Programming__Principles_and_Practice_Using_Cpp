#include "../std_lib_facilities.h"

int main()
{
    for (int i = '0'; i <= '9'; ++i)
        cout << char(i) << '\t' << i << '\n';

    cout << '\n';

    for (int i = 'A'; i <= 'Z'; ++i)
        cout << char(i) << '\t' << i << '\n';

    cout << '\n';

    for (int i = 'a'; i <= 'z'; ++i)
        cout << char(i) << '\t' << i << '\n';
}
