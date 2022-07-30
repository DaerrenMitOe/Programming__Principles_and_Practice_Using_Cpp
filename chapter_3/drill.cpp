#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to";
    string first_name;
    cin >> first_name;

    cout << "Dear " << first_name << ",\n"
         << "How are you? I am fine. i miss you.";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << "laterly?\n";

    char friend_sex = '0';
    cout << "How old is " << friend_name << "?\n";
    int age;
    cin >> age;
    if (age < 12)
        cout << "Next year you will be " << age + 1;
    if (age == 17)
        cout << "Next year you will be able to vote.";
    if (age > 70)
        cout << "i hope you are enjoying retirement";

    string name;
    cout << "Yours sincerely,\n\n"
         << name;
}
