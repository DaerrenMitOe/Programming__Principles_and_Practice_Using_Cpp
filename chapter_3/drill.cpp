#include "../std_lib_facilities.h"

int main()
{
    // 1
    string first_name;

    cout << "Please enter the name of the person you want to write to:\n";
    cin >> first_name;
    cout << "Dear " << first_name << ",";

    // 2
    cout << "How are you? I am fine. I miss you.";

    // 3
    string friend_name;

    cout << "Please enter the name of an atother friend you want to write to:\n";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " laterly?";

    // 4
    char friend_sex = '0';

    cout << "Please enter an m if the friend is male and an f if the friend is female:\n";
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";

    // 5
    int age;

    cout << "How old is " << friend_name << "?\n";
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age < 1)
        simple_error("you're kidding!");
    if (age > 109)
        simple_error("you're kidding!");

    // 6
    if (age < 12)
        cout << "Next year you will be " << age + 1 << ".\n";
    if (age == 17)
        cout << "Next year you will be able to vote.\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";

    // 7
    cout << "Yours sincerely,"
         << "\n\n\nDaerrenMitOe\n";
}