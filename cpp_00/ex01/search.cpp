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

static void	show_one_contact(int num, PhoneBook book)
{
	std:: string	str;
	int	l;
	int	i;
	int	pos;

	std:: cout << "INDEX: ";
	std:: getline(std:: cin, str);
	l = str.length();
	if (l > 0)
	{
		for (i = 0; i < l; i++)
		{
			if (!isdigit(str[i]))
			{
				std:: cout << "Wrong Index." << std:: endl;
				return ;
			}
		}
		pos = stoi(str, nullptr, 10) - 1;
		if (pos < num)
		{
			std:: cout << "Name: " << book.contacts[pos].getName() << std:: endl;
			std:: cout << "Last name: " << book.contacts[pos].getLastname() << std:: endl;
			std:: cout << "Nickname: " << book.contacts[pos].getNickname() << std:: endl;
			std:: cout << "Phone: " << book.contacts[pos].getPhone() << std:: endl;
			std:: cout << "Darkest secret: " << book.contacts[pos].getSecret() << std:: endl;
		}
		else
			std:: cout << "Wrong Index." << std:: endl;
	}
	else
		std:: cout << "Wrong Index." << std:: endl;
}

static void	print_space(int lenght, std:: string str)
{
	if (lenght < 10)
		std:: cout << std:: setw(10) << std:: setfill(' ') ;
	std:: cout << str;
	if (lenght >= 10)
		std:: cout << ".";
	std:: cout << "|";
}

void	search(PhoneBook book, int num)
{
	int i;

	std:: cout << "-------------LIST OF CONTACTS----------------" << std:: endl;
	std:: cout << "|     INDEX" << "|    F.NAME" << "|    L.NAME" << "|  NICKNAME|"<< std:: endl;
	for (i = 0; i < num; i++)
	{
		std:: cout << "|         " << i + 1 << "|";
		print_space(book.contacts[i].getName().length(), book.contacts[i].getName().substr(0, 9));
		print_space(book.contacts[i].getLastname().length(), book.contacts[i].getLastname().substr(0, 9));
		print_space(book.contacts[i].getNickname().length(), book.contacts[i].getNickname().substr(0, 9));
		std:: cout << std:: endl;
	}
	std:: cout << "---------------------------------------------" << std:: endl;
	if (i != 0)
		show_one_contact(i, book);
}
