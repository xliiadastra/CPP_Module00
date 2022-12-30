#include <vector>
#include <iostream>

int main()
{
	typedef std::vector<int> ints_t;

	ints_t ptr(4, 4+4);
	ptr[0] = 1;
	std::cout << sizeof(ptr) << ' ' << ptr[3] << ptr[4] << ptr[5] << std::endl;
	
	int arr[] = {1, 2, 3, 4, 5};
	std::vector<int> v_arr(arr, arr + 5);
	std::cout << arr << std::endl;
}
