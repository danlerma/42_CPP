/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:21 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:54:46 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H

#define CLAPTRAP_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

class ClapTrap
{
protected:
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
	//getter
	std::string	getName();
	//functions
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
