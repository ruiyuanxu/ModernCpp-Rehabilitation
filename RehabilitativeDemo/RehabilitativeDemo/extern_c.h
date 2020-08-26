#pragma once


//foo.h


//#ifdef __cplusplus
//extern "C" {
//#endif

//	int add(int x, int y);

//#ifdef __cplusplus
//}
//#endif

// foo.c

//int add(int x, int y) {
//	return x + y;
//}

// 1.1.cpp

//#include "foo.h"
//#include <iostream>
//#include <functional>

//int main() {

//	[out = std::ref(std::cout << "Result from C code: " << add(1, 2))](){
//		out.get() << ".\n";
//	}();

//	return 0;
//}
//应先使用 gcc 编译 C 语言的代码：
//gcc - c foo.c