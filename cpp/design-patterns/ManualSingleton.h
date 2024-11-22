#ifndef MANUAL_SINGLETON_H
#define MANUAL_SINGLETON_H

#include <iostream>
#include <mutex>

class ManualSingleton {
private:
	static ManualSingleton* instance; // pointer for single instance
	static std::mutex mutex; // mutex for thread safety

	ManualSingleton() { std::cout << "Manual Singleton constructed\n"; }

public:
	// deleted copy constructor and assignment constructor
	// meaning it prohibts the use of those functions
	ManualSingleton(const ManualSingleton&) = delete;
	ManualSingleton& operator=(const ManualSingleton&) = delete;

	// Static method to get the single instance
	static ManualSingleton* getInstance() {
		if (instance == nullptr) { // check w/o lock
			std::lock_guard<std::mutex> lock(mutex);
			if (instance == nullptr) { // check w/ lock
				instance = new ManualSingleton();
			}
		}
		return instance;
	}

	// Destructor
	~ManualSingleton() { std::cout << "Manual Singleton destructured\n"; }
};

// **Definition of static members**
ManualSingleton* ManualSingleton::instance = nullptr;
std::mutex ManualSingleton::mutex;

#endif
