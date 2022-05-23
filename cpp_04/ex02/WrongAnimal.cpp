/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:19:54 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 20:20:06 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

//constructor
WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal: Default constructor called." << endl;
	this->type = "Empty";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	cout << "WrongAnimal: Copy constructor called." << endl;
	this->type = obj.getType();
}

WrongAnimal::WrongAnimal(std::string type)
{
	cout << "WrongAnimal: Type constructor called." << endl;
	this->type = type;
}

//destructor
WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal: Destructor called." << endl;
}

//operator
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	cout << "WrongAnimal: Assignation operator called." << endl;
	this->type = obj.type;
	return (*this);
}

//getter and setter
std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

//functions
void	WrongAnimal::makeSound() const
{
	cout << "WrongAnimal noise" << endl;
}
