/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:23:19 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/13 14:43:38 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

#define ZOMBIE_H

# include <string.h>
# include <iostream>
using std:: cout;
using std:: endl;

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	//setter
	void	setZombie(std::string name);
	//functions
	void	announce(void);
};

#endif
