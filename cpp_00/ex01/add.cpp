/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:02:05 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/08 19:51:40 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "tool.hpp"

void	add(PhoneBook *book, int pos)
{
	std::string	str;

	std:: cout << "Name: ";
	std:: getline(std:: cin, str);
	book->contacts[pos].setName(str);
	std:: cout << "Last name: ";
	std:: getline(std:: cin, str);
	book->contacts[pos].setLastname(str);
	std:: cout << "Nickname: ";
	std:: getline(std:: cin, str);
	book->contacts[pos].setNickname(str);
	std:: cout << "Phone: ";
	std:: getline(std:: cin, str);
	book->contacts[pos].setPhone(str);
	std:: cout << "Secret: ";
	std:: getline(std:: cin, str);
	book->contacts[pos].setSecret(str);
}
