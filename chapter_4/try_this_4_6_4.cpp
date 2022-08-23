#include "../std_lib_facilities.h"

int main()
{
    bool in;

    vector<string> disliked = {"Appel", "Banana", "Lemon", "Mango"};

    for (string words; cin >> words;)
    {
        in = true;
        for (string x : disliked)
        {
            if (words == x)
            {
                cout << "BLEEP" << '\n';
                in = false;
            }
        }

        if (in)
            cout << words << '\n';
    }
}