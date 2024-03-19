/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:42:46 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/19 19:32:04 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("(Bureaucrat) GradeTooHigh -> Error de menos de 1.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("(Bureaucrat) GradeTooLow -> Error de más de 150.");
}

const char* Bureaucrat::NotSignedException::what() const throw()
{
	return ("(Bureaucrat) No esta firmado.");
}

Bureaucrat::Bureaucrat(): name("Default")
{
	std::cout << "Constructor por defecto (Bureaucrat)"<< std::endl;
	this->grade = 75;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor (Bureaucrat)"<< std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string nam): name(nam), grade(grade)
{
	std::cout << "Constructor personalizado (Bureaucrat)"<< std::endl;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getGrade() > 150)
		throw(el);
	else if (this->getGrade() < 1)
		throw(eh);
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): name(obj.getName())
{
	std::cout << "Constructor por copia (Bureaucrat)"<< std::endl;
	// this->name = obj.getName();
	this->grade = obj.getGrade();
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getGrade() > 150)
		throw(el);
	else if (this->getGrade() < 1)
		throw(eh);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat&	obj)
{
	std::cout << "Operador por asignación (Bureaucrat)"<< std::endl;
	// this->name = obj.name;
	this->grade = obj.getGrade();
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getGrade() > 150)
		throw(el);
	else if (this->getGrade() < 1)
		throw(eh);
	return (*this);
}

const std::string	&Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment(int grade)
{
	if ((this->getGrade() - grade) > 1)
		this->grade = this->grade - grade;
	else
	{
		const GradeTooHighException ex;
		throw(ex);
	}
}

void	Bureaucrat::decrement(int grade)
{
	if ((this->getGrade() + grade) < 150)
		this->grade = this->grade + grade;
	else
	{
		const GradeTooLowException ex;
		throw(ex);
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance)
{
	os << instance.getName() << ", bureaucrat grade " << instance.getGrade()  << ".";
	return (os);
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		if (f.getSign() != true)
			std::cout << this->getName() << " couldn’t sign " << f.getName()  << " because (is not valid)" << std::endl;
	}
	catch(const AForm::GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(AForm const& form)
{
	if (form.getSign() == false)
	{
		NotSignedException ex;
		std::cout << "No esta firmado por lo que no se puede ejecutar" << std::endl;
		throw(ex);
	}
	try{
		bool result = form.execute(*this);
		if (result == true)
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}catch (std::exception &e)
	{
		std::cout << this->getName() <<  " bureaucrat couldn't sign form " << form.getName() << std::endl;
	}
}
