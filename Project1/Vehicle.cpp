#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(string mfctr, int y) {
	manufacturer = mfctr;
	year = y;
}
string Vehicle::getManufacturer() {
	return manufacturer;
}
int Vehicle::getYear() {
	return year;
}
void Vehicle::setManufacturer(string mfctr) {
	manufacturer = mfctr;
}
void Vehicle::setYear(int y) {
	year = y;
}
void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer;
	cout << "Year: " << year;
}
