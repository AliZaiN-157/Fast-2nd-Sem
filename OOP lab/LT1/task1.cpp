#include <iostream>
#include <iomanip>
using namespace std;

double kmph_to_mph(double speed){

	const double  kmph = 1.61; // round off of 1.609344

	double mph = speed / kmph;

	return mph;
}

int main() {

	double speed;

	cout << "Enter the speed of vehicle in kmph: ";
	cin >> speed;
	
	cout << speed << " kmph is equal to "<< fixed << setprecision(2) << kmph_to_mph(speed) << " mph";
}
