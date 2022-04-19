/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:02:32 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:06:55 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB

#define HUMANB

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*weapon;
	std::string	name;
public:
	//constructor
	HumanB(std::string name);
	HumanB();
	//destructor
	~HumanB();
	//setter
	void	setWeapon(Weapon club);
	//functions
	void	attack();
};

#endif
