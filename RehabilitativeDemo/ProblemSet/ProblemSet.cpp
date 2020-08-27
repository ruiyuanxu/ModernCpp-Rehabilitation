// ProblemSet.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <map>
#include <string>
#include <functional>

//F for function
template <typename Key, typename Value, typename F>
void update(std::map<Key, Value>& m, F foo) 
{
	for (auto&&[key, value] : m) value = foo(key);
}

template<typename ... T>
auto avg(T ... t)
{
	return (t + ...) / (sizeof ...(t));
}

int main() {
	std::map<std::string, long long int> m{
		{"a", 1},
		{"b", 2},
		{"c", 3}
	};
	update(m, [](std::string key) -> long long int {
		return std::hash<std::string>{}(key);
	});
	for (auto&&[key, value] : m)
		std::cout << key << ":" << value << std::endl;

	std::cout << avg(1, 2, 4, 9) << std::endl;
	return 0;
}