#pragma once

#ifndef TIA_ASSERT_3RD_HPP
#define TIA_ASSERT_3RD_HPP

	#include "./exceptio.hpp"

	namespace tia {

		// based on EXCEPTIO_HPP
		class Assert_t {
			public:
				// COMMENT: "It was caused by using Assert"

				Assert_t() {};

				template<typename EXC>
				void operator()(bool condition, EXC exc) {
					if (!condition) throw exc;
				}

				virtual ~Assert_t() {};

		};

	#define ASSERTT(condition, index) {tia::Assert_t{}(condition, tia::Exceptio{100, L"by ASSERTT"});}

	}

	

#endif // !MY_ASSERT_3RD_HPP
