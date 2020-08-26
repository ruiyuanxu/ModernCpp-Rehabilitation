#ifndef CONTROL_FLOW_VARIADIC_TEMPLATE
#define CONTROL_FLOW_VARIADIC_TEMPLATE
#include <string>
#include <iostream>


template<typename... Args> void FakePrintf(const std::string &str, Args... args);

template<typename... Args>
inline void FakePrintf(const std::string & str, Args... args)
{
	std::cout << sizeof(args) << std::endl;
}


//before cpp17
template<typename T0>
void FakePrintf14(T0 value) 
{
	std::cout << value << std::endl;
}

template<typename T, typename... Ts>
void FakePrintf14(T value, Ts... args) 
{
	std::cout << value << std::endl;
	printf1(args...);
}


//after cpp17
template<typename T0, typename... T>
void FakePrintf17(T0 t0, T... t) {
	std::cout << t0 << std::endl;
	if constexpr (sizeof...(t) > 0) printf2(t...);
}

//initializer_list & lambda
template<typename T, typename... Ts>
auto FakePrintfLambda(T value, Ts... args) {
	std::cout << value << std::endl;
	(void)std::initializer_list<T>{([&args] {
		std::cout << args << std::endl;
	}(), value)...};
}


#endif // !CONTROL_FLOW_VARIADIC_TEMPLATE

