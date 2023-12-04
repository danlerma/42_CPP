/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 17:25:34 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

//constructor
Dog::Dog() : Animal()
{
	std::cout << "Dog: Default constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal() 
{
	std::cout << "Dog: Copy constructor called." << std::endl;
	this->type = obj.getType();
}

Dog::Dog(std::string type) : Animal()
{
	std::cout << "Dog: Type constructor called." << std::endl;
	this->type = type;
}

//destructor
Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << std::endl;
}

//operator
Dog&	Dog::operator=(const Dog& obj)
{
	std::cout << "Dog: Assignation operator called." << std::endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	Dog::makeSound() const
{
	std::cout << "Guau guau !" << std::endl;
}
