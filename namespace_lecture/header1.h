#include <iostream>

namespace header1 {
	int foo() {
		std::cout << "header1::foo() called" << std::endl;
		return 0;
	}
	void bar() {
		std::cout << "header1::bar() called" << std::endl;
		return ;
	};
}