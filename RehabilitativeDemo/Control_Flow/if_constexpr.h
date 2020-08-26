#ifndef CONTROL_FLOW_IF_CONSTEXPR
#define CONTROL_FLOW_IF_CONSTEXPR


template<typename T>
auto PrintTypeInfo(const T& t) {
	if constexpr (std::is_integral<T>::value) {
		return t + 1;
	}
	else {
		return t + 0.001;
	}
}

#endif // !CONTROL_FLOW_IF_CONSTEXPR

