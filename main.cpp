#include <iostream>

#include "B.cpp"


int main() {
	B b1("b1");
	A a1(&b1);
	a1.print();

	A a2("a1");
	B b2(&a2);
	b2.print();

	return 0;
}
