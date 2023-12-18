/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:29 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/12 19:27:33 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

//constructor
Animal::Animal()
{
	std::cout << "Animal: Default constructor called." << std::endl;
	this->type = "Empty";
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal: Copy constructor called." << std::endl;
	this->type = obj.getType();
}

Animal::Animal(std::string type)
{
	std::cout << "Animal: Type constructor called." << std::endl;
	this->type = type;
}

//destructor
Animal::~Animal()
{
	std::cout << "Animal: Destructor called." << std::endl;
}

//operator
Animal&	Animal::operator=(const Animal& obj)
{
	std::cout << "Animal: Assignation operator called." << std::endl;
	this->type = obj.type;
	return (*this);
}

//getter and setter
std::string	Animal::getType() const
{
	return (this->type);
}

//functions
void	Animal::makeSound() const
{
	std::cout << "Animal noise" << std::endl;
}
