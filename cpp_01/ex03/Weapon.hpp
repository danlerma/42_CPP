/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:08:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/13 18:12:51 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

#define WEAPON_H

# include<string>
# include<iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	~Weapon();
	//getter
	std::string	getType();
	//setter
	void	setType(std::string type);
};




#endif
