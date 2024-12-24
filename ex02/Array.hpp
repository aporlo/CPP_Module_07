#ifndef	ARRAY_H
# define ARRAY_H


# include <exception>
# include <iostream>
# include <stdlib.h>
# include <time.h>

template<typename T>
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
		T	operator[](unsigned int i) const;
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

#endif
