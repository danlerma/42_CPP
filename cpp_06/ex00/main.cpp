#include"ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return(0);
	}
	std::cout << "Introduce un argumento." << std::endl;
	return(1);
}