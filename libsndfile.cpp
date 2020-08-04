#include "libsndfile.h"

#include "./libsndfile/src/sndfile.hh"

#include <string>
#include <iostream>

Libsndfile *Libsndfile::singleton = NULL;

Libsndfile *Libsndfile::get_singleton() {
	return singleton;
}

void Libsndfile::read_file(const String &p_path) {
	SndfileHandle file;

	std::wstring ws = std::wstring(p_path.c_str());
	std::string fname(ws.begin(), ws.end());

	file = SndfileHandle(fname);

	print_line(vformat("Opened file '%s'\n", String(fname.c_str())));
	print_line(vformat("Sample rate : %d\n", file.samplerate()));
	print_line(vformat("Channels    : %d\n", file.channels()));
}

void Libsndfile::_bind_methods() {

}

Libsndfile::Libsndfile() {
	singleton = this;
	// read_file("C:/test.wav");
}

Libsndfile::~Libsndfile() {
}
