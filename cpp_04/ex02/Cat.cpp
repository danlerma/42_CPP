/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:53 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 19:52:37 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

//constructor
Cat::Cat()
{
	std::cout << "Cat: Default constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& obj) 
{
	std::cout << "Cat: Copy constructor called." << std::endl;
	this->type = obj.getType();
	this->brain = obj.brain;
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.brain->getIdea(i));
}

Cat::Cat(std::string type)
{
	std::cout << "Cat: Type constructor called." << std::endl;
	this->type = type;
	this->brain = new Brain();
}

//destructor
Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << std::endl;
	delete this->brain;
}

//operator
Cat&	Cat::operator=(Cat const& obj)
{
	std::cout << "Cat: Assignation operator called." << std::endl;
	this->brain = obj.brain;
	return (*this);
}

//getter y setter
std::string	Cat::getBrain(int index)
{
	return this->brain->getIdea(index);
}

void	Cat::setBrain(int index, std::string str)
{
	this->brain->setIdea(index, str);
}

//functions
void	Cat::makeSound() const
{
	std::cout << "Miau miau !" << std::endl;
}
