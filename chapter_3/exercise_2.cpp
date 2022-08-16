#include "../std_lib_facilities.h"

int main()
{
	double miles;

	cout << "Please enter miles to convert to kilometers\n"
		 << "Miles: ";
	cin >> miles;
	cout << "Kilometers: " << miles * 1.609 << '\n';
}