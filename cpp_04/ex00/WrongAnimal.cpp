/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:19:54 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 17:26:10 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

//constructor
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called." << std::endl;
	this->type = "Empty";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	this->type = obj.getType();
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal: Type constructor called." << std::endl;
	this->type = type;
}

//destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called." << std::endl;
}

//operator
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal: Assignation operator called." << std::endl;
	this->type = obj.type;
	return (*this);
}

//getter and setter
std::string	WrongAnimal::getType() const
{
	return (this->type);
}

//functions
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noise" << std::endl;
}
