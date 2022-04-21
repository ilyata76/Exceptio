#include "../include/exceptio.hpp"

#include <iostream>

int main(int argc, char** argv) {
	try {
		throw Exceptio(1, "description", "comment");
	} catch (Exceptio& E) {
	}
	return 0;
}