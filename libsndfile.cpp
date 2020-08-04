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

	printf("Opened file '%s'\n", fname);
	printf("    Sample rate : %d\n", file.samplerate());
	printf("    Channels    : %d\n", file.channels());



	puts("");
}

void Libsndfile::_bind_methods() {

}

Libsndfile::Libsndfile() {
	singleton = this;
}

Libsndfile::~Libsndfile() {
}
