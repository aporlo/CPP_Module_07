#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

template<typename T>
Array<T>::Array(void):_array(new T()), _n(0) {}

template<typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _n(n) {}

template<typename T>
Array<T>::Array(Array const& src):_array(new T[src._n]), _n(src._n){
	for(unsigned int i = 0; i < this->_n; i++)
	{
		this->_array[i] = src._array[i];
	}
}

template<typename T>
Array<T>::~Array<T>(void) {
	if(this->_array != NULL)
		delete[] this->_array;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const& r) {
	if (this != &r)
	{
		delete [] this->_array;
		this->_n = r._n;
		this->_array = new T[r._n];
		for(unsigned int i = 0; i < this->_n; i++){
			this->_array[i] = r._array[i];
		}
	}
	return (*this);
}

template<typename T>
T Array<T>::operator[] (unsigned int i) const {
	if (i >= this->_n)
		throw IndexOutofBound();
	return this->_array[i];
}

template<typename T>
T &Array<T>::operator[] (unsigned int i) {
	if (i >= this->_n)
		throw IndexOutofBound();
	return this->_array[i];
}
#endif
