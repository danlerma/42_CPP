/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:11 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 16:02:16 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

//constructor
FragTrap::FragTrap()
{
	this->name = "Default";
	this->attack_damage = 20;
	this->hitpoints = 100;
	this->energy_points = 50;
	cout << "FragTrap default constructor: " << this->name << " created"<< endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->attack_damage = 20;
	this->hitpoints = 100;
	this->energy_points = 50;
	cout << "FragTrap constructor: " << this->name << " created"<< endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj.name)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "FragTrap copy constructor: " << this->name << " created"<< endl;
}

//destructor
FragTrap::~FragTrap()
{
	cout << "FragTrap "<< this->name << " destroyed." << endl;
}

//operator
FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	this->name = obj.name;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	this->hitpoints = obj.hitpoints;
	cout << "FragTrap asignation operator: " << this->name << " created"<< endl;
	return (*this);
}

//functions
void FragTrap::attack(std::string const & target)
{
	if (this->hitpoints > 0)
		cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << endl;
	else
		cout << "FragTrap " << this->name << " is dead. Can't do anything." << endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->hitpoints > 0)
		cout << this->name << " high five with their bros." << endl;
}
