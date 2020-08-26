// New_if_switch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec = { 1,2,3,4,5 };
	if (const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 3); itr != vec.end())
	{
		*itr = 4;
	}
	//supported since C++17
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
		std::cout << *itr << std::endl;
	return 0;
}
