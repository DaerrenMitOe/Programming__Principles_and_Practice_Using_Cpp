#include "../std_lib_facilities.h"

int main()
{
	cout << "Convert mile to kilometer"
		 << "\nMile: ";
	double mile;
	cin >> mile;
	double kilometer = mile * 1.609;
	cout << "Kilometer: " << kilometer;
}