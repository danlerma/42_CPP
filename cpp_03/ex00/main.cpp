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

#include"ClapTrap.hpp"

int	main(void)
{
	ClapTrap	*player1 = new ClapTrap("Roger");
	ClapTrap	*player2 = new ClapTrap("Juan");

	player1->attack("Juan");
	player2->takeDamage(20);
	delete player1;
	delete player2;
	return (0);
}
