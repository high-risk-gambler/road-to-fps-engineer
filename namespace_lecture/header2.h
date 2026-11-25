#include <iostream>

namespace header2 {
	int foo() {
		std::cout << "header2::foo() called" << std::endl;
		return 0;
	}
	void bar() {
		std::cout << "header2::bar() called" << std::endl;
		return;
	};
}