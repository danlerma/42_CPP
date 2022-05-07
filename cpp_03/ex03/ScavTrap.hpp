#ifndef SCAVTRAP_H

#define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	//constructor
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& obj);
	//destructor
	~ScavTrap();
	//operators
	ScavTrap& operator=(const ScavTrap& obj);
	//functions
	void attack(std::string const & target);
	void guardGate();
};

#endif
