#include "register_types.h"

#include "./libsndfile.h"

#include <core/class_db.h>
#include <core/engine.h>

static Libsndfile *libsndfile = NULL;

void register_libsndfile_types() {
	// Singleton
	libsndfile = memnew(Libsndfile);
	ClassDB::register_class<Libsndfile>();
	Engine::get_singleton()->add_singleton(Engine::Singleton("Libsndfile", Libsndfile::get_singleton()));
}

void unregister_libsndfile_types() {
	memdelete(libsndfile);
}
