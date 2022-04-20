#include "../include/exceptio.hpp"

#include <iostream>

int main(int argc, char** argv) {
	Exceptio a(1000);
	std::cout << a.get_index();
	return 0;
}