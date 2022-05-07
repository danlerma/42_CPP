#ifndef DIAMONDTRAP_H

#define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	//constructor
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& obj);
	//destructor
	~DiamondTrap();
	//operators
	DiamondTrap& operator=(const DiamondTrap& obj);
	//functions
	void attack(std::string const & target);
	void whoAmI();
};

#endif
