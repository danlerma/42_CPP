#ifndef CLAPTRAP_H

#define CLAPTRAP_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

class ClapTrap
{
private:
	std::string	name;
	int	hitpoints;
	int	energy_points;
	int	attack_damage;
public:
	//constructor
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	//destructor
	~ClapTrap();
	//operators
	ClapTrap& operator=(const ClapTrap& obj);
	//functions
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
