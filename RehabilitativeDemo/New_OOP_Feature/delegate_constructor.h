#ifndef NEW_OOP_FEATURE_DELEGATE_CONSTRUCTOR
#define NEW_OOP_FEATURE_DELEGATE_CONSTRUCTOR

#include <iostream>
class Base {
public:
	int value1;
	int value2;

	Base() {
		value1 = 1;
	}

	Base(int value) : Base() {
		value2 = value;
	}
};
#endif