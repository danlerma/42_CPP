/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:53 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/20 17:12:23 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

//constructor
Cat::Cat() : Animal()
{
	cout << "Default constructor called." << endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal() 
{
	cout << "Copy constructor called." << endl;
	this->type = obj.getType();
}

Cat::Cat(std::string type) : Animal()
{
	cout << "Type constructor called." << endl;
	this->type = type;
}

//destructor
Cat::~Cat()
{
	cout << "Destructor called." << endl;
}

//operator
Cat&	Cat::operator=(const Cat& obj)
{
	cout << "Assignation operator called." << endl;
	this->type = obj.getType();
	return (*this);
}
