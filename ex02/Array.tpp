#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array(void) {}


template<typename T>
Array<T>(unsigned int n):_n(n), _array(new T[n]) {
		}

		Array<T>(Array const& src):_n(src._n), _array(new T[src._n]){
			for(unsigned int i = 0; i < this->_n; i++)
			{
				this->_array[i] = src._array[i];
			}
		}

		~Array<T>(void) {
			if(this->_array != NULL)
				delete[] this->_array;
		}

		Array &operator=(T const & r) {
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

		T & operator[] (unsigned int i) const {
			if (i >= this->_n)
				throw IndexOutofBound();
			return this->_array[i];
		}
#endif
