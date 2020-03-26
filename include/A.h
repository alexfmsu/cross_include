#pragma once

#include "B.h"

using std::cout;
using std::endl;
using std::string;


class A {

public:
	A(const string& value) : value_(value) {}

	A(B* b) : b_(b) {}

	void print() const {
		cout << b_->value() << endl;
	}

	string value() const {
		return value_;
	}

	~A() {}

private:
	B* b_;

	string value_;
};
