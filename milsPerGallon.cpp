//============================================================================
//calculate miles per gallon
//============================================================================

#include <iostream>
using namespace std;
const double gallonPerLiter = 0.264179;
double MPG (double liters, double miles);
int main() {
	double liters;
	double miles;
	cout << "How many liters of gasoline did your car consume for this trip?" << endl;
	cin >> liters;
	cout << "How many miles did you travel in this trip?" << endl;
	cin >> miles;
	cout << "your car can drive " << MPG(liters,miles) << " miles per gallon";

	return 0;
}
double MPG (double liters, double miles){

	double amountOfGallons = gallonPerLiter * liters;
	double milePerGallon = miles/amountOfGallons;
	return milePerGallon;


}
