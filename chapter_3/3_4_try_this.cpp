#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter a integer value: ";
    int n;
    cin >> n;
    double m;
    m = n;
    cout << "n == " << n
    << "\nn + 1 == " << n + 1
    << "\nn - 1 == " << n - 1
    << "\nthree times n == " << 3 * n
    << "\ntwice n == " << n + n
    << "\nn squared == " << n * n
    << "\nhalf of n == " << m / 2
    << "\nmodulo of n == " << n % 2
    << "\nsquare root of n == " << sqrt(m)
    << '\n';
}
