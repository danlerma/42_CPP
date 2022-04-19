/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:08:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:07:18 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

#define WEAPON_H

# include<string>
# include<iostream>

using	std::cout;
using	std::endl;

class Weapon
{
private:
	std::string	_type;
public:
	//constructor
	Weapon();
	Weapon(std::string type);
	//destructor
	~Weapon();
	//getter
	std::string	getType() const;
	//setter
	void	setType(std::string type);
};

#endif
