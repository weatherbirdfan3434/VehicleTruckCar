#include "Truck.h"
#include <iostream>

using namespace std;


Truck::Truck(string mfctr, int y, int tc) : Vehicle (mfctr, y){
	towingCapacity = tc;
}
int Truck::getTowingCapacity() {
	return towingCapacity;
}
void Truck::setTowingCapacity(int tc) {
	towingCapacity = tc;
}
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}