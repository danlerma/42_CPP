/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:53 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 17:25:23 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

//constructor
Cat::Cat() : Animal()
{
	std::cout << "Cat: Default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal() 
{
	std::cout << "Cat: Copy constructor called." << std::endl;
	this->type = obj.getType();
}

Cat::Cat(std::string type) : Animal()
{
	std::cout << "Cat: Type constructor called." << std::endl;
	this->type = type;
}

//destructor
Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << std::endl;
}

//operator
Cat&	Cat::operator=(const Cat& obj)
{
	std::cout << "Cat: Assignation operator called." << std::endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	Cat::makeSound() const
{
	std::cout << "Miau miau !" << std::endl;
}
