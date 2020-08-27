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
template<typename T0, typename ...Ts>
void FakePrintf17(T0 t0, Ts ...t) {
	std::cout << t0 << std::endl;
	if constexpr (sizeof...(t) > 0) FakePrintf17(t...);
}

//initializer_list & lambda
template<typename T, typename... Ts>
auto FakePrintfLambda(T value, Ts... args) {
	std::cout << value << std::endl;
	(void)std::initializer_list<T>{([&args] {
		std::cout << args << std::endl;
	}(), value)...};
}

//since cpp17
template<typename ... T>
auto sum(T ... t) {
	return (t + ...);
}

//非类型模板参数
template <typename T, int BufSize>
class buffer_t {
public:
	T& alloc();
	void free(T& item);
private:
	T data[BufSize];
};


template<typename T, int BufSize>
inline T & buffer_t<T, BufSize>::alloc()
{
	return new buffer_t<T, BufSize>;
}

template<typename T, int BufSize>
inline void buffer_t<T, BufSize>::free(T & item)
{

}

//auto in template; since cpp17
template <auto value> void foo() {
	std::cout << value << std::endl;
	return;
}

//通过初始化列表，(lambda 表达式, value)... 将会被展开。由于逗号表达式的出现，首先会执行
//前面的 lambda 表达式，完成参数的输出。为了避免编译器警告，我们可以将 std::initializer_list
//显式的转为 void。

#endif // !CONTROL_FLOW_VARIADIC_TEMPLATE
