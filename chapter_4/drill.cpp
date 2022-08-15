#include "../std_lib_facilities.h"


int main()
{
    int number1, number2;
    while(true){
        cin >> number1 >> number2;
        if(number1 == '|' || number2 == '|'){
            break;
        } else {
            cout << number1 << " " << number2 << '\n';
        }
    }
}