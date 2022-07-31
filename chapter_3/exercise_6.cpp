#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter three number"
         << "\nNumber 1: ";
    int val1;
    cin >> val1;
    cout << "Number 2: ";
    int val2;
    cin >> val2;
    cout << "Number 3: ";
    int num3;
    cin >> num3;

    int num1;
    int num2;
    if(val1 <= val2) {
        num1 = val1;
        num2 = val2;
    }
  
    if(val1 > val2) {
        num1 = val2;
        num2 = val1;
    }

    cout << val1 << " " << val2 << " " << num3 << '\n';

    if(num3 < num1) 
        cout << num3 << " " << num1 << " " << num2;
    
    if (num3 < num2) 
        cout << num1 << " " << num3 << " " << num2;
    
    if (num3 > num2) 
        cout << num1 << " " << num2 << " " << num3;


    // cout << "Enter three Numbers"
    // << "\nNumber 1: ";
    // int num1;
    // cin >> num1;
    // cout << "Number 2: ";
    // int num2;
    // cin >> num2;
    // cout << "Number 3: ";
    // int num3;
    // cin >> num3;
    
    // if (num1 < num2)
    //     if(num2 < num3)
    //         cout << num1 << " " << num2 << " " << num3;

    // if (num1 < num3)
    //     if(num3 < num2)
    //         cout << num1 << " " << num3 << " " << num2;

    // if (num2 < num1)
    //     if(num1 < num3)
    //         cout << num2 << " " << num1 << " " << num3;

    // if (num2 < num3)
    //     if(num3 < num1)
    //         cout << num2 << " " << num3 << " " << num1;

    // if (num3 < num1)
    //     if (num1 < num2)
    //         cout << num3 << " " << num1 << " " << num2;

    // if (num3 < num2)
    //     if (num2 < num1)
    //         cout << num3 << " " << num2 << " " << num1;

    // if (num1 == num2)
    //     if (num1 < num3)
    //         cout << num1 << " " << num2 << " " << num3;
    //     if (num3 < num1)
    //         cout << num3 << " " << num1 << " " << num2;

    // if (num1 == num3)
    //     if (num1 < num2)
    //         cout << num1 << " " << num3 << " " << num2;
    //     if (num2 < num1)
    //         cout << num2 << " " << num1 << " " << num3;

    // if (num1 == num2)
    //     if(num2 == num3)
    //         cout << num1 << " " << num2 << " " << num3;
}