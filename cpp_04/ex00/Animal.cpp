/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:29 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/20 17:02:44 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

//constructor
Animal::Animal()
{
	cout << "Default constructor called." << endl;
	this->type = "Empty";
}

Animal::Animal(const Animal& obj)
{
	cout << "Copy constructor called." << endl;
	this->type = obj.getType();
}

Animal::Animal(std::string type)
{
	cout << "Int constructor called." << endl;
	this->type = type;
}

//destructor
Animal::~Animal()
{
	cout << "Destructor called." << endl;
}

//operator
Animal&	Animal::operator=(const Animal& obj)
{
	cout << "Assignation operator called." << endl;
	this->type = obj.type;
	return (*this);
}

//getter and setter
std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}