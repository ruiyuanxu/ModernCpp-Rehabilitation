// Control_Flow.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "variadic_template.h"
#include "if_constexpr.h"
#include "for_in_Containers.h"

inline void TestIfConstexpr() {
	std::cout << PrintTypeInfo(1.23) << std::endl;
}

void TestForInRange() {
	ForinVectors();
}

int main()
{
	TestIfConstexpr();
	TestForInRange();
	buffer_t<int, 100> buf;
	foo<10>();
	std::string s;
	std::cin >> s;
	return 0;
}

