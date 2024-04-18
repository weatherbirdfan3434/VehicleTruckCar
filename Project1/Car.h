#pragma once
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Car : public Vehicle
{
	private:
		int numDoors;
	public:
		Car(string, int, int);
		int getNumDoors();
		void setNumDoors(int);
		void displayInfo();
};

