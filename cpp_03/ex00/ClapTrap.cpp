/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:11 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/19 13:30:54 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

//constructor
ClapTrap::ClapTrap()
{
	this->name = "Default";
	this->attack_damage = 0;
	this->hitpoints = 10;
	this->energy_points = 10;
	cout << "ClapTrap default constructor: " << this->name << " created"<< endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->attack_damage = 0;
	this->hitpoints = 10;
	this->energy_points = 10;
	cout << "ClapTrap constructor: " << this->name << " created"<< endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "ClapTrap copy constructor: " << this->name << " created"<< endl;
}

//destructor
ClapTrap::~ClapTrap()
{
	cout << this->name << " destroyed." << endl;
}

//operator
ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "ClapTrap asignation operator: " << this->name << " created"<< endl;
	return (*this);
}

//getter
std::string	ClapTrap::getName()
{
	return (this->name);
}

//functions
void ClapTrap::attack(std::string const & target)
{
	if (this->hitpoints > 0)
		cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << endl;
	else
		cout << this->name << " is dead. Can't do anything." << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints > 0)
	{
		this->hitpoints = this->hitpoints - amount;
		if (this->hitpoints < 0)
			this->hitpoints = 0;
		cout << this->name << " now has " << this->hitpoints << " of HP." << endl;
	}
	else
		cout << this->name << " is dead. Can't do anything." << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->hitpoints <= 0)
		cout << this->name << " is dead. Can't do anything." << endl;
	else
	{
		this->hitpoints += amount;
		cout << this->name << " now has " << this->hitpoints << " of HP." << endl;
	}
}
