//Jake Minneman
//CIS 1202 801
//April 17, 2024

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	//Vehicle test
	string vManufacturer;
	int vYear;
	cout << "Enter manufacturer: ";
	getline(cin, vManufacturer);
	cout << "Enter model year: ";
	cin >> vYear;
	cout << endl;
	Vehicle vehicle(vManufacturer, vYear);
	vehicle.displayInfo();
	cout << endl;

	//Car test
	string cManufacturer;
	int cYear;
	int cNumDoors;
	cout << "Enter manufacturer: ";
	cin.ignore(); //To prevent a bug
	getline(cin, cManufacturer);
	cout << "Enter model year: ";
	cin >> cYear;
	cout << "Enter number of doors: ";
	cin >> cNumDoors;
	cout << endl;
	Car car(cManufacturer, cYear, cNumDoors);
	car.displayInfo();
	cout << endl;

	//Truck test
	string tManufacturer;
	int tYear;
	int tTowingCapacity;
	cout << "Enter manufacturer: ";
	cin.ignore();
	getline(cin, tManufacturer);
	cout << "Enter model year: ";
	cin >> tYear;
	cout << "Enter towing capacity: ";
	cin >> tTowingCapacity;
	cout << endl;
	Truck truck(tManufacturer, tYear, tTowingCapacity);
	truck.displayInfo();
}