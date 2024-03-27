#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(): AForm(72,45,"Robot")
{
	std::cout<<"Constructor por defecto (RobotomyRequestForm)"<<std::endl;
	this->target="Default";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"Destructor por defecto (RobotomyRequestForm)"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(72,45,target)
{
	std::cout<<"Constructor personalizado(RobotomyRequestForm)"<<std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm(72,45,obj.target)
{
	std::cout<<"Constructor por copia(RobotomyRequestForm)"<<std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	std::cout << "Operador por asignación (RobotomyRequestForm)"<< std::endl;
	this->target = obj.target;
	return (*this);
}

void	RobotomyRequestForm::executeSmth() const
{

	srand((unsigned) time(NULL));
	int per = rand() % 100;

	if (per % 2 == 0)
		std::cout << "It´s not posible the robotomy" << std::endl;
	else
		std::cout << "Perfect!!! The " << this->target << " has been robotomized." << std::endl;
}
