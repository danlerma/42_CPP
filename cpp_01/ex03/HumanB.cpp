/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:01:54 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 17:23:24 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//constructor
HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

//destructor
HumanB::~HumanB()
{
}
//setter
void	HumanB::setWeapon(Weapon club)
{
	this->weapon = &club;
}
//functions
void	HumanB::attack()
{
	if (this->weapon != NULL)
		cout << this->name << "  attacks with his " << this->weapon->getType() << endl;
}
