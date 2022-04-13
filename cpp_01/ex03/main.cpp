/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:20:04 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/13 13:54:58 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<string.h>
#include<iostream>

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	zombie("Nicolas");
	Zombie	*new_zombie;

	zombie.announce();
	new_zombie = zombieHorde(5, "HORDAAAAA");
	delete [] new_zombie;
	return (0);
}
