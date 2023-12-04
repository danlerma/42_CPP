/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 19:52:40 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

//constructor
Dog::Dog()
{
	std::cout << "Dog: Default constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& obj) 
{
	std::cout << "Dog: Copy constructor called." << std::endl;
	this->type = obj.getType();
	this->brain = obj.brain;
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.brain->getIdea(i));
}

Dog::Dog(std::string type)
{
	std::cout << "Dog: Type constructor called." << std::endl;
	this->type = type;
	this->brain = new Brain();
}

//destructor
Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << std::endl;
	delete this->brain;
}

//operator
Dog&	Dog::operator=(Dog const& obj)
{
	std::cout << "Dog: Assignation operator called." << std::endl;
	this->brain = obj.brain;
	return (*this);
}

//getter y setter
std::string	Dog::getBrain(int index)
{
	return this->brain->getIdea(index);
}

void	Dog::setBrain(int index, std::string str)
{
	this->brain->setIdea(index, str);
}

//functions
void	Dog::makeSound() const
{
	std::cout << "Guau guau !" << std::endl;
}
