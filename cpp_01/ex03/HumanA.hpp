/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:40:24 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:06:19 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H

#define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon	weapon;
	std::string	name;
public:
	//constructor
	HumanA(std::string name, Weapon club);
	HumanA();
	//destructor
	~HumanA();
	//functions
	void	attack();
};

#endif
