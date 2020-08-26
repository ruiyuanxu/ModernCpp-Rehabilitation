// RehabilitativeDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

constexpr int kFibonacci(const int n) 
{
	return n == 1 || n == 2 ? 1 : kFibonacci(n - 1) + kFibonacci(n - 2);
}
// constexpr in C++11
// if() allowed since C++14
constexpr int kFibonacci14(const int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	return kFibonacci14(n - 1) + kFibonacci14(n - 2);
}



int main() 
{
	std::cout << kFibonacci(10) << std::endl;
	std::cout << kFibonacci14(10) << std::endl;
	return 0;
}
