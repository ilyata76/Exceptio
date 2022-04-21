#pragma once

#ifndef MY_ASSERT_HPP
#define MY_ASSERT_HPP

#include "exceptio.hpp"

class Assert {
	public:
		Assert(bool condition) {
			if (!condition) throw Exceptio(INT_PLUG, STR_PLUG, "It was caused by using Assert");
		}
		Assert(bool condition, const char* description) {
			if (!condition) throw Exceptio(INT_PLUG, description, STR_PLUG);
		}
		Assert(bool condition, int16_t index, const char* description) {
			if (!condition) throw Exceptio(index, description, "It was caused by using Assert");
		}
		Assert(bool condition, int16_t index, const char* description, const char* comment) {
			if (!condition) throw Exceptio(index, description, comment);
		}
};


#endif // !MY_ASSERT_HPP
