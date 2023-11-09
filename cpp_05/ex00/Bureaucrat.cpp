/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:42:46 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/09 14:36:50 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("(Bureaucrat) Error de más de 150.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("(Bureaucrat) Error de menos de 1.");
}

Bureaucrat::Bureaucrat(): name("Default")
{
	std::cout << "Constructor por defecto (Bureaucrat)"<< std::endl;
	this->grade = 75;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getGrade() > 150)
		throw(el);
	else if (this->getGrade() < 1)
		throw(eh);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor (Bureaucrat)"<< std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string nam): name(nam)
{
	std::cout << "Constructor personalizado (Bureaucrat)"<< std::endl;
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
