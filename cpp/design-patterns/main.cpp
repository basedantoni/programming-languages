#include "Singleton.h"
#include "ManualSingleton.h"
#include "Vehicle.h"

int main() {
	Singleton& s1 = Singleton::getInstance();
	Singleton& s2 = Singleton::getInstance();

	ManualSingleton* s3 = ManualSingleton::getInstance();
	ManualSingleton* s4 = ManualSingleton::getInstance();

	Vehicle original("Tesla Model S");
	original.getModel();

	Prototype *clone = original.clone();
	clone->getModel();

	delete clone;

	return 0;
}
