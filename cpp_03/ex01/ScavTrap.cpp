/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:11 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/19 13:35:03 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

//constructor
ScavTrap::ScavTrap()
{
	this->name = "Default";
	this->attack_damage = 20;
	this->hitpoints = 100;
	this->energy_points = 50;
	cout << "ScavTrap default constructor: " << this->name << " created"<< endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->attack_damage = 20;
	this->hitpoints = 100;
	this->energy_points = 50;
	cout << "ScavTrap constructor: " << this->name << " created"<< endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj.name)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "ScavTrap copy constructor: " << this->name << " created"<< endl;
}

//destructor
ScavTrap::~ScavTrap()
{
	cout << "ScavTrap "<< this->name << " destroyed." << endl;
}

//operator
ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "ScavTrap asignation operator: " << this->name << " created"<< endl;
	return (*this);
}

//functions
void ScavTrap::attack(std::string const & target)
{
	if (this->hitpoints > 0)
		cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << endl;
	else
		cout << "ScavTrap " << this->name << " is dead. Can't do anything." << endl;
}

void	ScavTrap::guardGate()
{
	if (this->hitpoints > 0)
		cout << this->name << " is guarding the gate." << endl;
	else
		cout << "ScavTrap " << this->name << " is dead. Can't do anything." << endl;
}
