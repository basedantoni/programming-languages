#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

class Singleton {
private:
	Singleton() { cout << "Singleton constructed\n"; }
	~Singleton() { cout << "Singleton deconstructed\n"; }

public:
	static Singleton& getInstance() {
		// Thread-safe lazy initialization courtesy of C++11
		static Singleton instance;
		return instance;
	}
};

#endif
