/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:06:42 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/15 18:38:31 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return ("(Form) GradeTooHigh -> Error de menos de 1.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("(Form) GradeTooLow -> Error de más de 150.");
}

Form::Form(): name("Default"), s_grade(50), ex_grade(100)
{
	std::cout<<"Constructor por defecto (Form)"<<std::endl;
	this->sign = false;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw(el);
	else if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw(eh);
}

Form::~Form()
{
	std::cout<<"destructor por defecto (Form)"<<std::endl;
}

Form::Form(int sgrade, int exgrade, std::string nam): name(nam), s_grade(sgrade), ex_grade(exgrade)
{
	std::cout<<"Constructor personalizado (Form)"<<std::endl;
	this->sign = false;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw(el);
	else if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw(eh);
}

Form::Form(const Form &obj): name(obj.name), s_grade(obj.s_grade), ex_grade(obj.ex_grade)
{
	std::cout<<"Constructor por copia (Form)"<<std::endl;
	this->sign = false;
	const GradeTooLowException el;
	const GradeTooHighException eh;
	if (this->getS_grade() > 150 || this->getEx_grade() > 150)
		throw(el);
	else if (this->getS_grade() < 1 || this->getEx_grade() < 1)
		throw(eh);
}

Form& Form::operator=(Form &obj)
{
	std::cout << "Operador por asignación (Form)"<< std::endl;
	this->sign = obj.sign;
	return (*this);
}

std::string	Form::getName()
{
	return(this->name);
}

bool	Form::getSign()
{
	return(this->sign);
}

int	Form::getS_grade()
{
	return(this->s_grade);
}

int	Form::getEx_grade()
{
	return(this->ex_grade);
}

void	Form::beSigned(Bureaucrat &obj)
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
