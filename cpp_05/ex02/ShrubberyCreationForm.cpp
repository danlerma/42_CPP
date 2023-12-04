/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:08:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/28 18:16:02 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
{
	std::cout<<"Constructor por defecto (ShrubberyCreationForm)"<<std::endl;
	this->setS_grade(145);
	this->setEx_grade(137);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"Destructor por defecto (ShrubberyCreationForm)"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	std::cout<<"Constructor por copia (ShrubberyCreationForm)"<<std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	std::cout << "Operador por asignación (ShrubberyCreationForm)"<< std::endl;

}