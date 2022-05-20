/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/20 17:12:16 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	cout << "Default constructor called." << endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal() 
{
	cout << "Copy constructor called." << endl;
	this->type = obj.getType();
}

Dog::Dog(std::string type) : Animal()
{
	cout << "Type constructor called." << endl;
	this->type = type;
}

//destructor
Dog::~Dog()
{
	cout << "Destructor called." << endl;
}

//operator
Dog&	Dog::operator=(const Dog& obj)
{
	cout << "Assignation operator called." << endl;
	this->type = obj.getType();
	return (*this);
}