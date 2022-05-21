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
	cout << "WrongCat: Default constructor called." << endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal() 
{
	cout << "WrongCat: Copy constructor called." << endl;
	this->type = obj.getType();
}

WrongCat::WrongCat(std::string type) : WrongAnimal()
{
	cout << "WrongCat: Type constructor called." << endl;
	this->type = type;
}

//destructor
WrongCat::~WrongCat()
{
	cout << "WrongCat: Destructor called." << endl;
}

//operator
WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	cout << "WrongCat: Assignation operator called." << endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	WrongCat::makeSound() const
{
	cout << "Miau miau !" << endl;
}
