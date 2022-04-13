/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:33:18 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/13 14:40:36 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombie = new Zombie[N];
	for (i = 0; i < N; i++)
	{
		zombie[i].setZombie(name);
		cout << i << "-> ";
		zombie[i].announce();
	}
	return (zombie);
}
