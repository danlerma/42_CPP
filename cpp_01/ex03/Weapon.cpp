/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:08:19 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:07:27 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
//constructor
Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

//destructor
Weapon::~Weapon()
{
}
//getter
std::string	Weapon::getType() const
{
	return this->_type;
}
//setter
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
