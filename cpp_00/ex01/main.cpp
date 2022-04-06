/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:01:55 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/06 17:51:06 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include"PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>

void add(Contact contacts);
void search(Contact contacts);

int	main(void)
{
	Contact	contacts;

	contacts.name = "Dan";
	std:: cout << "Name: " << contacts.name << std:: endl;
	// PhoneBook	book;
	// std:: string	menu;

	// std:: cout << "MENU\n\tADD\n\tSEARCH\n\tEXIT\n" << "->\t";
	// std:: cin >> menu;
	// while (menu != "EXIT")
	// {
	// 	if (menu == "ADD")
	// 		add(book.contacts[1]);
	// 	else if (menu == "SEARCH")
	// 		search(book.contacts);
	// 	else if (menu != "EXIT")
	// 		std:: cout << "Please, type ADD, SEARCH or EXIT.\n" << "->\t";
	// 	std:: cin >> menu;
	// }
	// std:: cout << "EXIT\n";
}
