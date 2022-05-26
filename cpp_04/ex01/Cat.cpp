/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:53 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/25 11:04:20 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

//constructor
Cat::Cat() : Animal()
{
	cout << "Cat: Default constructor called." << endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& obj) : Animal() 
{
	cout << "Cat: Copy constructor called." << endl;
	this->type = obj.getType();
	this->brain = obj.brain;
}

Cat::Cat(std::string type) : Animal()
{
	cout << "Cat: Type constructor called." << endl;
	this->type = type;
}

//destructor
Cat::~Cat()
{
	cout << "Cat: Destructor called." << endl;
	delete this->brain;
}

//operator
Cat&	Cat::operator=(const Cat& obj)
{
	cout << "Cat: Assignation operator called." << endl;
	this->type = obj.getType();
	this->brain = obj.brain;
	return (*this);
}

//getter y setter
std::string	Cat::getBrain(int index)
{
	return this->brain->getIdea(index);
}

void	Cat::setBrain(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}


//functions
void	Cat::makeSound() const
{
	cout << "Miau miau !" << endl;
}
