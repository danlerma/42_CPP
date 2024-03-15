/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:06:42 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/15 15:34:20 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("(AForm) GradeTooHigh -> Error de menos de 1.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("(AForm) GradeTooLow -> Error de más de 150.");
}

AForm::AForm(): name("Default"), s_grade(50), ex_grade(100)
{
	std::cout<<"Constructor por defecto (AForm)"<<std::endl;
	this->sign = false;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw(el);
	else if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw(eh);
}

AForm::~AForm()
{
	std::cout<<"destructor por defecto (AForm)"<<std::endl;
}

AForm::AForm(int sgrade, int exgrade, std::string nam): name(nam), s_grade(sgrade), ex_grade(exgrade)
{
	std::cout<<"Constructor personalizado (AForm)"<<std::endl;
	this->sign = false;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw(el);
	else if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw(eh);
}

AForm::AForm(const AForm &obj): name(obj.name), s_grade(obj.s_grade), ex_grade(obj.ex_grade)
{
	std::cout<<"Constructor por copia (AForm)"<<std::endl;
	this->sign = false;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw(el);
	else if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw(eh);
}

AForm& AForm::operator=(AForm &obj)
{
	std::cout << "Operador por asignación (AForm)"<< std::endl;
	this->sign = obj.sign;
	return (*this);
}

std::string	const AForm::getName() const
{
	return(this->name);
}

bool	AForm::getSign() const
{
	return(this->sign);
}

int	AForm::getS_grade()
{
	return(this->s_grade);
}

int	AForm::getEx_grade()
{
	return(this->ex_grade);
}

void	AForm::beSigned(Bureaucrat &obj)
{
	if (this->sign == true)
	{
		std::cout<< obj.getName() << " couldn’t sign "<<this->getName()<< " because <already signed>."<<std::endl;
		return ;
	}
	if (obj.getGrade() <= this->getS_grade())
		this->sign = true;
	else
	{
		this->sign = false;
		const GradeTooLowException ex;
		throw(ex);
	}
}

bool AForm::execute(Bureaucrat const & executor) const
{
	if (this->sign == true && executor.getGrade() <= this->ex_grade)
	{
		std::cout << "Form executed" << std::endl;
		return (true);
	}
	else
	{
		GradeTooLowException ex;
		std::cout << "No se puede ejecutar." << std::endl;
		throw(ex);
		return (false);
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& instance) 
{
	os << instance.getName();
	return (os);
}
