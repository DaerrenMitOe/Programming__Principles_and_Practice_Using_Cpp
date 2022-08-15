#include "../std_lib_facilities.h"

int main()
{
	double miles;

	cout << "Enter miles to convert to kilometers\n"
		 << "Miles: ";
	cin >> miles;
	cout << "Kilometers: " << mile * 1.609 << '\n';
}