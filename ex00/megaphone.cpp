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
			while (*argv[i])
			{
				char Word = std::toupper(static_cast<char>(*argv[i]));
				std::cout << Word;
				argv[i]++;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
