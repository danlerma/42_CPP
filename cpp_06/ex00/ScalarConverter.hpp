#ifndef SCALARCONVERTER_HPP

# define SCALARCONVERTER_HPP

#include<string>
#include<iostream>
#include<cctype>

class	ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter&	operator=(ScalarConverter &obj);
	public:

		static void convert(std::string param);
};

std::ostream& operator<<(std::ostream& os, const ScalarConverter& instance);

#endif