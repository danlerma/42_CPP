/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 18:16:36 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	cout << "Dog: Default constructor called." << endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal() 
{
	cout << "Dog: Copy constructor called." << endl;
	this->type = obj.getType();
}

Dog::Dog(std::string type) : Animal()
{
	cout << "Dog: Type constructor called." << endl;
	this->type = type;
}

//destructor
Dog::~Dog()
{
	cout << "Dog: Destructor called." << endl;
}

//operator
Dog&	Dog::operator=(const Dog& obj)
{
	cout << "Dog: Assignation operator called." << endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	Dog::makeSound() const
{
	cout << "Guau guau !" << endl;
}
