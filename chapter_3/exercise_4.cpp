#include "../std_lib_facilities.h"

int main()
{
     cout << "Enter two integer values"
          << "\nValue 1: ";
     int val1;
     cin >> val1;
     cout << "Value 2: ";
     int val2;
     cin >> val2;
     if (val1 < val2)
          cout << "\nValue
           1 is smaller then Value
           2"
               << "\nValue
                2 is larger then Value
                1";
     else
          cout << "\nValue
           2 is smaller then Value
           1"
               << "\nValue
                1 is larger then Value
                2";

     cout << "\nThe sum of Value
      1 and Value
      2 is " << val1 + val2
          << "\nThe difference between Value
           1 and Value
           2 is " << val1 - val2
          << "\nThe difference between Value
           2 and Value
           1 is " << val2 - val1
          << "\nThe product of Value
           1 and Value
           2 is " << val1 * val2
          << "\nThe ratio between Value
           1 and Value
           2 is " << val1 / val2
          << "\nThe ratio between Value
           2 and Value
           1 is " << val2 / val1;
}