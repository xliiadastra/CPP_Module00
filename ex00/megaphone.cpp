#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(++i < argc)
		{
			std::string	str = argv[i];
			int j = 0;
			while (str[j])
			{
				str[j] = std::toupper(str[j]);
				j++;
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}
