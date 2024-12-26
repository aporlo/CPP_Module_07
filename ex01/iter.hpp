#ifndef ITER_H
# define ITER_H

#include <cstddef>
#include <iostream>

template<typename T> void iter(T *a, size_t const & l, void (*f)(T &)) {
	if (a == NULL || f == NULL)
		return;
	for (size_t i = 0; i < l; i++)
		f(a[i]);
}

template<typename T> void toprint(T & x) {
	std::cout << x << std::endl;
}

#endif
