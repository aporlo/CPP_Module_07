#pragma once


# include <exception>
# include <iostream>
# include <stdlib.h>
# include <time.h>

// # define MAX_VAL	750

template<class T>


class Array
{
	private:
		T				*_array;
		unsigned int	_n;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const & r);
		~Array();
		Array &operator=(Array const& r);
		T	&operator[](unsigned int i);

		unsigned int size(void) const {
			return this->_n;
		}

		class IndexOutofBound: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Index is out of bounds";
				}
		};

};

