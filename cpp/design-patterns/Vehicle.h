#ifndef VEHICLE_H
#define VEHICLE_H

#include "Prototype.h"
#include <iostream>

using namespace std;

class Vehicle : public Prototype {
public:
	Vehicle(const string& m) : Prototype(m) { 
		cout << "Vehicle constructed\n";
	}

	// Override the clone method
	Vehicle* clone() const override {
		return new Vehicle(model);
	}
};

 #endif
