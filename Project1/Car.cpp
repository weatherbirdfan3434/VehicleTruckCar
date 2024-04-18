#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string mfctr, int y, int d) : Vehicle(mfctr, y) {
	numDoors = d;
}
int Car::getNumDoors() {
	return numDoors;
}
void Car::setNumDoors(int d) {
	numDoors = d;
}
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of doors: " << numDoors << endl;
}