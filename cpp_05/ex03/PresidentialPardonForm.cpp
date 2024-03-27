#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(): AForm(25,5,"President")
{
	std::cout<<"Constructor por defecto (PresidentialPardonForm)"<<std::endl;
	this->target="Default";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<"Destructor por defecto (PresidentialPardonForm)"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(25,5,target)
{
	std::cout<<"Constructor personalizado(PresidentialPardonForm)"<<std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): AForm(25,5,obj.target)
{
	std::cout<<"Constructor por copia(PresidentialPardonForm)"<<std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
	std::cout << "Operador por asignación (PresidentialPardonForm)"<< std::endl;
	this->target = obj.target;
	return (*this);
}

void	PresidentialPardonForm::executeSmth() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
