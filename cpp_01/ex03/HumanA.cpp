/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:40:21 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:06:29 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructor
HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon club)
{
	this->name = name;
	this->weapon = club;
}

//destructor
HumanA::~HumanA()
{
}
//functions
void	HumanA::attack()
{
	cout << this->name << "  attacks with his " << this->weapon.getType() << endl;
}
