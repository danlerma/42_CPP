/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:22:21 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 20:22:21 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

//constructor
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat: Default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal() 
{
	std::cout << "WrongCat: Copy constructor called." << std::endl;
	this->type = obj.getType();
}

WrongCat::WrongCat(std::string type) : WrongAnimal()
{
	std::cout << "WrongCat: Type constructor called." << std::endl;
	this->type = type;
}

//destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called." << std::endl;
}

//operator
WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat: Assignation operator called." << std::endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	WrongCat::makeSound() const
{
	std::cout << "Miau miau !" << std::endl;
}
