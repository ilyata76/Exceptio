#include "../src/exceptio.hpp"
#include "../src/assert.hpp"

int main() {
	throw tia::Exceptio(0, L"abobus");
	return 0;
}