/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:54:16 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int	main(void)
{
	ClapTrap	*player1 = new ClapTrap("Camila");
	ClapTrap	*player2 = new ClapTrap("Carlos");
	cout << endl;
	ScavTrap	*player3 = new ScavTrap("Sam");
	ScavTrap	*player4 = new ScavTrap("Sana");
	cout << endl;
	FragTrap	*player5 = new FragTrap("Fernando");
	FragTrap	*player6 = new FragTrap("Feliciana");

	cout << endl;
	player1->attack(player3->getName());
	player4->attack(player2->getName());
	player5->attack(player6->getName());
	cout << endl;
	player3->takeDamage(50);
	player2->takeDamage(90);
	player6->takeDamage(30);
	player4->guardGate();
	player2->beRepaired(20);
	player4->beRepaired(5);
	player6->highFivesGuys();
	cout << endl;
	delete player1;
	delete player2;
	cout << endl;
	delete player3;
	delete player4;
	cout << endl;
	delete player5;
	delete player6;
	return (0);
}
