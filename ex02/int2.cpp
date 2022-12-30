#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
	        typedef std::vector<int>                                                                  ints_t;
	int     const                   d[]                     = { 5, 765, 564, 2, 87, 23, 9, 20 };
        size_t const            d_size( sizeof(d) / sizeof(int) );
	std::vector<int>                          deposits( d, d + d_size );
	ints_t::iterator	dep_begin = deposits.begin();

	std::cout << deposits << std::endl;
	
	for (int i = 0; i < d_size; i++)
		std::cout << deposits[i] << std::endl;
}
