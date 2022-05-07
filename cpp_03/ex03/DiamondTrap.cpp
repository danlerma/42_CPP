/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:11 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 16:02:16 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

//constructor
DiamondTrap::DiamondTrap()
{
	this->name = "Default";
	this->ClapTrap::name = name.append("_clap_name");
	this->attack_damage = FragTrap::attack_damage;
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	cout << "DiamondTrap default constructor: " << this->name << " created"<< endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->ClapTrap::name = name.append("_clap_name");
	this->attack_damage = FragTrap::attack_damage;
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	cout << "DiamondTrap constructor: " << this->name << " created"<< endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj.name)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "DiamondTrap copy constructor: " << this->name << " created"<< endl;
}

//destructor
DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap "<< this->name << " destroyed." << endl;
}

//operator
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "DiamondTrap asignation operator: " << this->name << " created"<< endl;
	return (*this);
}

//functions
void	DiamondTrap::attack(std::string const & target)
{
	if (this->hitpoints > 0)
		cout << "DiamondTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << endl;
	else
		cout << "DiamondTrap " << this->name << " is dead. Can't do anything." << endl;
}

void	DiamondTrap::whoAmI()
{
	cout << "My name is " << this->name << " but my ClapTrap's name is " << this->ClapTrap::getName() << endl;
}
