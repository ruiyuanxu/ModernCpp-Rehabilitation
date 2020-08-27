#ifndef NEW_OOP_FEATURE_INHERIT_CONSTRUCT
#define NEW_OOP_FEATURE_INHERIT_CONSTRUCT

#include "delegate_constructor.h"

class Subclass : public Base {
public:
	using Base::Base; // 继承构造
};


#endif // !NEW_OOP_FEATURE_INHERIT_CONSTRUCT

