#ifndef PART2_RUNTIME_LAMBDA_LAMBDA_EXP
#define PART2_RUNTIME_LAMBDA_LAMBDA_EXP

//The basic syntax of a Lambda expression is as follows :

//[capture list](parameter list) mutable(optional)exception attribute -> return type{
//	// function body
//}

#include <iostream>

void lambda_value_capture() {
	int value = 1;
	auto copy_value = [value] {
		return value;
	};
	value = 100;
	auto stored_value = copy_value();
	std::cout << "stored_value = " << stored_value << std::endl;
	// At this moment, stored_value == 1, and value == 100.
	// Because copy_value has copied when its was created.
}

void lambda_reference_capture() {
	int value = 1;
	auto copy_value = [&value] {
		return value;
	};
	value = 100;
	auto stored_value = copy_value();
	std::cout << "stored_value = " << stored_value << std::endl;
	// At this moment, stored_value == 100, value == 100.
	// Because copy_value stores reference
}


//
//[] empty capture list
//[name1, name2, …] captures a series of variables
//[&] reference capture, let the compiler derive the capture list by itself
//[=] value capture, let the compiler execute the list of derivation applications

#endif // !PART2_RUNTIME_LAMBDA_LAMBDA_EXP
