/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:20:04 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/20 19:36:52 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int	main(/*int argc, char **argv*/)
{
	Fixed	prueba(34);
	Fixed	pcpy1 = prueba;

	prueba.setNum(45);
	cout << "N: " << pcpy1.num << endl; 

	return (0);
}
