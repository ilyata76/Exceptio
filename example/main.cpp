#include "../src/exceptio.hpp"
#include "../src/assert.hpp"

#include <iostream>

namespace tia {
	class Logic_Error : public tia::Exceptio {
		public:
			Logic_Error(int _index) : Exceptio(_index) {};
			Logic_Error(int _index, const wchar_t* _discr) : Exceptio(_index, _discr) {};
			
			std::wstring what() override {
				return std::wstring(L"Logic Error!");
			};

			~Logic_Error() {
				std::wcout << "LE object was Destroyed\n";
			}
	};
}



int main() {

	try {

		std::wcout << "Exceptio Error...";
		throw tia::Exceptio(0, L"exceptio");

	} catch(tia::Exceptio& E) {

		try {

			std::wcout << " catched by Exceptio!\n";
			std::wcout << "Logic Error...";
			throw tia::Logic_Error(0, L"logic");

		} catch(tia::Exceptio& E) {

			try {
				tia::Assert assert;
				
				std::wcout << " catched by Exceptio!\n";
				std::wcout << "Override what(): " << E.what() << L"\n";
				std::wcout << "Assert false condition...";
				
				assert(bool(0));

			} catch(tia::Exceptio& E) {


				try {

					std::wcout << " catched by Exceptio!\n";
					std::wcout << "ASSERT false condition...";

					ASSERT(0);
				} catch (tia::Exceptio& E) {
					std::wcout << " catched by Exceptio!\n";
				}

			}

		}


	}
	
	return 0;
}