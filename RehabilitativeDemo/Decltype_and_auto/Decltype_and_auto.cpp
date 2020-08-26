// Decltype_and_auto.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//C++11: trailing return type
template<typename T, typename U>
auto Add_Cpp11(T x, U y) -> decltype(x + y) {
	return x + y;
}

//After C++14
template<typename T, typename U>
auto Add_Cpp14(T x, U y) {
	return x + y;
}

int main()
{
	auto num1 = Add_Cpp11<int, double>(1, 2.0);
	auto num2 = Add_Cpp14<double, int>(1.0, 2);
	if (std::is_same<decltype(num1), double>::value) std::cout << "num1 is double since cpp11" << std::endl;
	if (std::is_same<decltype(num2), double>::value) std::cout << "num2 is double since cpp14" << std::endl;

	return 0;
}

