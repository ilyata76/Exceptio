#pragma once

#include <stdint.h>

#ifndef EXCEPTIO_HPP
#define EXCEPTIO_HPP

#define INT_PLUG INT16_MIN
#define STR_PLUG "\0"

// MAIN CLASS
class Exceptio {
	protected:
		int16_t index; // -32k +32k
		const char* description;
		const char* comment;

	public:
	//
		Exceptio(int16_t index);
		Exceptio(int16_t index, const char* description);
		Exceptio(const char* description);
		Exceptio(const char* description, const char* comment);
		Exceptio(int16_t index, const char* description, const char* comment);
	//
		bool operator == (Exceptio& a);
	//
	protected:
		int16_t get_raw_index();
		const char* get_raw_description();
		const char* get_raw_comment();

		friend bool checking_index_for_out(Exceptio&);
		friend bool checking_description_for_out(Exceptio&);
		friend bool checking_comment_for_out(Exceptio&);
	public:
		int16_t get_index();
		const char* get_description();
		const char* get_comment();

};

// childs by exceptio?
#endif