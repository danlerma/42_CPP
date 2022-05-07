#ifndef FRAGTRAP_H

#define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	//constructor
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& obj);
	//destructor
	~FragTrap();
	//operators
	FragTrap& operator=(const FragTrap& obj);
	//functions
	void attack(std::string const & target);
	void highFivesGuys(void);
};

#endif
