#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
	private:
		string manufacturer;
		int year;
	public:
		Vehicle(string, int);
		string getManufacturer();
		int getYear();
		void setManufacturer(string);
		void setYear(int);
		void displayInfo();

};

