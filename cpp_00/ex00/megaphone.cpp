/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:30:17 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/02 20:55:17 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			for (size_t y = 0; argv[i][y]; y++)
				putchar(toupper(argv[i][y]));
			if ((size_t) argc - 1 != i)
				std:: cout << " ";
		}		
		std:: cout << std::endl;
	}
	return (0);
}
