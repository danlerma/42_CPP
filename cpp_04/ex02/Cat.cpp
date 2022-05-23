/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:53 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 18:16:46 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

//constructor
Cat::Cat() : Animal()
{
	cout << "Cat: Default constructor called." << endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal() 
{
	cout << "Cat: Copy constructor called." << endl;
	this->type = obj.getType();
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
}

//operator
Cat&	Cat::operator=(const Cat& obj)
{
	cout << "Cat: Assignation operator called." << endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	Cat::makeSound() const
{
	cout << "Miau miau !" << endl;
}
