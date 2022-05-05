/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:11 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 16:02:16 by dlerma-c         ###   ########.fr       */
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
	return (*this);
}

//functions
void ClapTrap::attack(std::string const & target)
{
	if (this->hitpoints > 0)
		cout << "ClapTrap" << this->name << " attack" << target << ", causing " << this->attack_damage << " points of damage!" << endl;
	else
		cout << this->name << "is dead. Can't do anything." << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount >= this->energy_points)
	{
		cout << this->name << "is dead. Can't do anything." << endl;
		this->energy_points -= amount;
		return ;
	}
	this->energy_points -= amount;
	cout << "Now " << this->name << "has " << this->energy_points  << " of energy points."<< endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints <= 0)
		cout << "Now " << this->name << "has " << this->energy_points  << " of energy points."<< endl;
	this->energy_points += amount;
	cout << "Now " << this->name << "has " << this->energy_points  << " of energy points."<< endl;
}
