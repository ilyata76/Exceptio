#pragma once

#ifndef MY_Assert_TIA_HPP
#define MY_Assert_TIA_HPP

#include "exceptio.hpp"

// based on Exceptio_TIA_HPP
class Assert_TIA {
	public:
		// COMMENT: "It was caused by using Assert_TIA"
		Assert_TIA(bool condition) {
			if (!condition) throw Exceptio_TIA(INT_PLUG, STR_PLUG, "It was caused by using Assert_TIA");
		}

		// Your DECRIPTION when calling an Exceptio_TIA
		// COMMENT: "It was caused by using Assert_TIA"
		Assert_TIA(bool condition, const char* description) {
			if (!condition) throw Exceptio_TIA(INT_PLUG, description, "It was caused by using Assert_TIA");
		}

		// Your DESCRIPTION and COMMENT when calling an Exceptio_TIAn
		Assert_TIA(bool condition, const char* description, const char* comment) {
			if (!condition) throw Exceptio_TIA(INT_PLUG, description, comment);
		}

		// Your INDEX, DESCRIPTION when calling and Exceptio_TIAn
		// COMMENT: "It was caused by using Assert_TIA"
		Assert_TIA(bool condition, int16_t index, const char* description) {
			if (!condition) throw Exceptio_TIA(index, description, "It was caused by using Assert_TIA");
		}

		// Your INDEX, DESCRIPTION and COMMENT when calling and Exceptio_TIAn
		Assert_TIA(bool condition, int16_t index, const char* description, const char* comment) {
			if (!condition) throw Exceptio_TIA(index, description, comment);
		}
};

#endif // !MY_Assert_TIA_HPP
