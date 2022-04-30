#include "../exceptio.hpp"

bool checking_index(int i) {
	return (i < INT16_MIN || i > INT16_MAX) ? false : true;
}

// index - number of 16-bit integer for your enumeration and lists (if you see INT_PLUG you made a mistake)
Exceptio_TIA::Exceptio_TIA(int16_t index) {
	this->comment = STR_PLUG;
	this->description = STR_PLUG;
	this->index = checking_index(index) ? index : INT_PLUG;
}

// description - string which should describe the problem
Exceptio_TIA::Exceptio_TIA(const char* description) {
	this->comment = STR_PLUG;
	this->description = description;
	this->index = INT_PLUG;
}

// description - string which should describe the problem
// comment - optional str
Exceptio_TIA::Exceptio_TIA(const char* description, const char* comment) {
	this->comment = comment;
	this->description = description;
	this->index = INT_PLUG;
}

// index - number of 16-bit integer for your enumeration and lists (if you see INT_PLUG you made a mistake)
// description - string which should describe the problem
Exceptio_TIA::Exceptio_TIA(int16_t index, const char* description) {
	this->comment = STR_PLUG;
	this->description = description;
	this->index = checking_index(index) ? index : INT_PLUG;
}

// index - number of 16-bit integer for your enumeration and lists (if you see INT_PLUG you made a mistake)
// description - string which should describe the problem
// comment - optional str
Exceptio_TIA::Exceptio_TIA(int16_t index, const char* description, const char* comment) {
	this->comment = comment;
	this->description = description;
	this->index = checking_index(index) ? index : INT_PLUG;
}

// compares by index
bool Exceptio_TIA::operator == (Exceptio_TIA& a) {
	return bool(this->index == a.index);
}

int16_t Exceptio_TIA::get_raw_index() {
	return int16_t(this->index);
}

bool checking_index_for_out(Exceptio_TIA& a) {
	return a.get_raw_index() != INT_PLUG;
}

const char* Exceptio_TIA::get_raw_description() {
	return this->description;
}

bool checking_description_for_out(Exceptio_TIA& a) {
	return strcmp(a.get_raw_description(), STR_PLUG);
	// returns 0 if strs are equal
}

const char* Exceptio_TIA::get_raw_comment() {
	return this->comment;
}

bool checking_comment_for_out(Exceptio_TIA& a) {
	return strcmp(a.get_raw_comment(), STR_PLUG);
	// returns 0 if strs are equal
}

//////////////////////////////////////////////////////////////////////////// GETTERS

int16_t Exceptio_TIA::get_index() {
	return int16_t(this->index);
}

const char* Exceptio_TIA::get_description() {
	return checking_description_for_out(*this) ? this->get_raw_description() : "Your Exceptio_TIA was created without description.";
}

const char* Exceptio_TIA::get_comment() {
	return checking_comment_for_out(*this) ? this->get_raw_comment() : "Your Exceptio_TIA was created without comment.";
}

////////////////////////////////////////////////////////////////////////////