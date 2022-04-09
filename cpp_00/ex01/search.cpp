/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:02:08 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/08 19:51:37 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.hpp"

static void	print_space(int lenght, std:: string str)
{
	// int	round = 10 - lenght;

	if (lenght < 10)
	{
		std:: cout << std:: setw(10) << std:: setfill(' ') ;
	}
	std:: cout << str;
	if (lenght >= 10)
		std:: cout << ".";
	std:: cout << "|";
}

void	search(PhoneBook book)
{
	std:: cout << "-------------LIST OF CONTACTS----------------" << std:: endl;
	std:: cout << "|     INDEX" << "|    F.NAME" << "|    L.NAME" << "|  NICKNAME|"<< std:: endl;
	for (int i = 0; i < 8; i++)
	{
		if (book.contacts[i].getName().length() == 0)
			break ;
		std:: cout << "|         " << i + 1 << "|";
		print_space(book.contacts[i].getName().length(), book.contacts[i].getName().substr(0, 9));
		print_space(book.contacts[i].getLastname().length(), book.contacts[i].getLastname().substr(0, 9));
		print_space(book.contacts[i].getNickname().length(), book.contacts[i].getNickname().substr(0, 9));
		std:: cout << std:: endl;
	}
	std:: cout << "---------------------------------------------" << std:: endl;
}
