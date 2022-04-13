/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:24:19 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/13 14:43:33 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

//constructor
Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

//destructor
Zombie::~Zombie()
{
	cout << "The zombie " << this->name << " has been destroyed." << endl;
	return ;
}

//setter
void Zombie::setZombie(std::string name)
{
	this->name = name;
}

//functions
void	Zombie::announce(void)
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}
