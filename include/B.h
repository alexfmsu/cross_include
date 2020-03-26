#pragma once

#include "A.h"

using std::cout;
using std::endl;
using std::string;


class A;

class B {

public:
	B(const string& value) : value_(value) {}

	B(A* a) : a_(a) {}

	void print() const;

	string value() const {
		return value_;
	}

	~B() {}

private:
	A* a_;

	string value_;
};
