#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Prototype {
protected:
	string model;

public:
	Prototype(const string& m) : model(m) { 
		cout << "Prototype constructed\n";
	}

	// virtual deconstructor for proper cleanup
	virtual ~Prototype() { cout << "Prototype deconstructed\n"; }

	// method to get the model
	void getModel() const {
		ostringstream oss;
		oss << "The model of the vehicle is " << model;
		cout << oss.str() << "\n";
	}

	// Pure virtual clone method
	virtual Prototype* clone() const = 0;
};

#endif
