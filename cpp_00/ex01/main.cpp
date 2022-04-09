/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:01:55 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/08 19:59:06 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.hpp"

int	main(void)
{
	int	pos = 0;
	PhoneBook	book;
	std:: string	menu;

	std:: cout << "-------------MENU-------------\n\n->\tADD\n->\tSEARCH\n->\tEXIT\n" << "\n-> ";
	std:: cin >> menu;
	std:: cout << std:: endl;
	while (menu != "EXIT")
	{
		if (menu == "ADD")
		{
			add(&book, pos);
			pos++;
			if (pos == 8)
				pos = 0;
		}
		else if (menu == "SEARCH")
			search(book);
		else if (menu != "EXIT")
			std:: cout << "\nPlease, type ADD, SEARCH or EXIT.\n" << "-> ";
		std:: cout << "-------------MENU-------------\n\n->\tADD\n->\tSEARCH\n->\tEXIT\n" << "\n-> ";
		std:: cin >> menu;
		std:: cout << std:: endl;
	}
	std:: cout << "-------------EXIT-------------\n";
}
