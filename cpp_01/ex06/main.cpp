/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:20:04 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:25:34 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	*karen = new Karen();
	std::string	level[4];

	if (argc == 2)
		for (int i = 1; argv[i]; i++)
			karen->complain(argv[i]);
	else
		cout << "Invalid arguments." << endl;
	delete karen;
	return (0);
}
