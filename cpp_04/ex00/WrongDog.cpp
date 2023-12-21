/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:22:21 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/21 18:02:29 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongDog.hpp"

//constructor
WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "WrongDog: Default constructor called." << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& obj) : WrongAnimal() 
{
	std::cout << "WrongDog: Copy constructor called." << std::endl;
	this->type = obj.getType();
}

WrongDog::WrongDog(std::string type) : WrongAnimal()
{
	std::cout << "WrongDog: Type constructor called." << std::endl;
	this->type = type;
}

//destructor
WrongDog::~WrongDog()
{
	std::cout << "WrongDog: Destructor called." << std::endl;
}

//operator
WrongDog&	WrongDog::operator=(const WrongDog& obj)
{
	std::cout << "WrongDog: Assignation operator called." << std::endl;
	this->type = obj.getType();
	return (*this);
}

//functions
void	WrongDog::makeSound() const
{
	std::cout << "Not guau guau !" << std::endl;
}
