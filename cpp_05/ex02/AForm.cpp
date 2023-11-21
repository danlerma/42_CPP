/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:06:42 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/20 13:33:29 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("(AForm) Error de más de 150.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("(AForm) Error de menos de 1.");
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
	this->sign = obj.sign;
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

std::string	AForm::getName()
{
	return(this->name);
}

bool	AForm::getSign()
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
		std::cout<<"Ya esta firmado."<<std::endl;
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
