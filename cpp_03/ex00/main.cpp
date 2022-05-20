/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/19 13:28:50 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int	main(void)
{
	ClapTrap	*player1 = new ClapTrap("Roger");
	ClapTrap	*player2 = new ClapTrap("Juan");

	cout << endl;
	player1->attack(player2->getName());
	player2->takeDamage(5);
	player2->beRepaired(10);
	player2->takeDamage(20);
	player2->beRepaired(10);
	player2->attack(player1->getName());
	cout << endl;
	delete player1;
	delete player2;
	return (0);
}
