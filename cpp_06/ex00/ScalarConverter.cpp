#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "(ScalarConverter) Constructor por defecto" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "(ScalarConverter) Destructor por defecto"<< std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	std::cout << "(ScalarConverter) Constructor por copia"<< std::endl;
	(void)obj;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter &obj)
{
	std::cout << "(ScalarConverter) Operador de asignación"<< std::endl;
	(void)obj;
	return(*this);
}

static int	check_integer(std::string param)
{
	int	check_point = 0;

	for (size_t i = 0; i < param.length(); i++)
	{
		if (isdigit(param[i]) == 0)
		{
			if ((param[0] == '+' || param[0] == '-') && i == 0)
			{
				continue ;
			}
			else if (param[i] == '.' && check_point == 0)
			{
				if (i == 0 || (i == param.length() - 2) || ((param[0] == '+' || param[0] == '-') && i < 2))
					return (1);
				check_point = i;
				continue ;
			}
			else if (param[param.length() - 1] == 'f' && check_point != 0 && i == param.length() - 1)
				continue ;
			else
				return (1);
		}
	}
	return(0);
}

void	ScalarConverter::convert(std::string param)
{
	//is printeable para los valores de char ascii. me pasan a que para char es non displayable pero es 
	// un int en realidad. Ñ seria imposible como James arthur en factor X 
	std::string auxFloat = param;
	std::string auxDouble = param;
	std::string inf_values[] = {"-inf", "+inf", "nan"};
	for (int i = 0; i < 3; i++)
	{
		if (inf_values[i] == param)
			auxFloat += "f";
		if (inf_values[i] == param.substr(0, param.size() - 1) 
			&& param.size() == inf_values[i].size() + 1
			&& param[param.size() -1] == 'f')
			auxDouble = param.substr(0, param.size() - 1);
	}
	if (auxFloat != param || auxDouble != param)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << auxFloat << std::endl;
		std::cout << "double: " << auxDouble << std::endl;
		return ;
	}

	if (param.length() != 1)
	{
		if (check_integer(param) == 1)
			std::cout << "ERROR: tiene más de un caracter"<< std::endl;
		else
			std::cout << "Es valido"<< std::endl;
	}
	else if(param.length() == 1)
	{
		std::cout << "char: " << param[0] << std::endl;
	}
}


std::ostream& operator<<(std::ostream& os, const ScalarConverter& instance)
{
	(void)instance;
	os << "Este es el objeto de Scaler." << std::endl;
	return(os);
}

