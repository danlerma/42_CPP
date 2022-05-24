/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/24 16:41:30 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	cout << "Dog: Default constructor called." << endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal() 
{
	cout << "Dog: Copy constructor called." << endl;
	this->type = obj.getType();
	this->brain = obj.brain;
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
	delete this->brain;
}

//operator
Dog&	Dog::operator=(const Dog& obj)
{
	cout << "Dog: Assignation operator called." << endl;
	this->type = obj.getType();
	this->brain = obj.brain;
	return (*this);
}

//getter
Brain	Dog::getBrain()
{
	return *this->brain;
}

//functions
void	Dog::makeSound() const
{
	cout << "Guau guau !" << endl;
}
