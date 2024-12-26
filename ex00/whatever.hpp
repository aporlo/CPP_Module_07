#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# include <sstream>
# include <time.h>
# include <typeinfo>
# include <cstdlib>
# include <string>


template<typename T> void swap(T & a, T & b) {
	T t = a;
	a = b;
	b = t;
}

template<typename T> T min(const T & a, const T & b) {
	return (b < a ? b : a);
}

template<typename T> T max(const T & a, const T & b){
	return (b > a ? b : a);
}


#endif
