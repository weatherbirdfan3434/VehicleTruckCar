#pragma once
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Truck : public Vehicle
{
	private:
		int towingCapacity;
	public:
		Truck(string, int, int);
		int getTowingCapacity();
		void setTowingCapacity(int);
		void displayInfo();
};

