#include "iter.hpp"

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	char ch[] = {'a', 'p', 'o', 'r', 'l', 'o'};
	double dd[] = {22.3, 32.3, 55.3};

	::iter(a, 5, &toprint);
	std::cout << "--------------------" << std::endl;
	::iter(ch, 6, &toprint);
	std::cout << "--------------------" << std::endl;
	::iter(dd, 3, &toprint);
	std::cout << "--------------------" << std::endl;
}
