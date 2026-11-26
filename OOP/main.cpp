#include <iostream>

class Animal {
public:
	void set_info(int w, int h, std::string n) {
		weight = w;
		height = h;
		name = n;
	}
	void print_info() {
		std::cout << "weight: " << weight << std::endl;
		std::cout << "height: " << height << std::endl;
		std::cout << "name: " << name << std::endl;
	}
private:
	int weight;
	int height;
	std::string name;
};



int main() {

	Animal dog;
	dog.set_info(10, 20, "dog");
	dog.print_info();

}