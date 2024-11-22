#include "Singleton.h"
#include "ManualSingleton.h"

int main() {
	Singleton& s1 = Singleton::getInstance();
	Singleton& s2 = Singleton::getInstance();

	ManualSingleton* s3 = ManualSingleton::getInstance();
	ManualSingleton* s4 = ManualSingleton::getInstance();

	return 0;
}
