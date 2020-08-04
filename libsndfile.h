#ifndef LIBSNDFILE_H
#define LIBSNDFILE_H

#include <core/object.h>

class Libsndfile: public Object {
	GDCLASS(Libsndfile, Object);


private:
	static Libsndfile *singleton;

protected:
	static void _bind_methods();

public:
	static Libsndfile *get_singleton();

	Libsndfile();
	~Libsndfile();
};
#endif
