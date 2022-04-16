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

#include"utils.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		cout << "Invalid arguments" << endl;
	else if (check_errors(argv) == 0)
	{
		read_file(argv);
		// std::ifstream	stream("sol_luna.txt");
		// std::string	frase;
		// stream >> frase ;
		// cout << frase << endl << endl;
		// stream.close();
		// std::ofstream	out("lol.txt");
		// out << "sueño que bailamos en la lluviiiia" << endl;
	}
	return (0);
}
