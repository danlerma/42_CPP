#include "AForm.hpp"
#include"Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout<<"Constructor por defecto (Intern)"<<std::endl;

}

Intern::~Intern()
{
	std::cout<<"destructor por defecto (Intern)"<<std::endl;
}


Intern::Intern(const Intern& obj)
{
	*this = obj;
}

Intern&	Intern::operator=(const Intern&	obj)
{
	if (this == &obj)
		return *this;
	return *this;
}

static	AForm *doShub(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

static	AForm *doRobot(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

static	AForm *doPresident(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	AForm	*obj;
	typedef AForm* (*func)(std::string const& target);
	typedef struct
	{
		std::string fname;
		func funt;
	}	formFuntions;

	formFuntions fun[3] =
	{
		{"shrubbery creation",&doShub},
		{"robotomy request",&doRobot},
		{"president request",&doPresident},

	};

	obj = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (fun[i].fname == name)
		{
			obj = fun[i].funt(target);
			std::cout << "Intern suscressfully created " << name << " form" << std::endl;
			return (obj);
		}
	}
	std::cout << "No se ha podido ejecutar el makeForm porque no se introdujo nombre valido." <<std::endl;
	return (obj);
}

