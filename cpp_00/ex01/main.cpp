#include"phonebook.hpp"

int	main(void)
{
	Contact	contacts;
	std:: string	menu;

	std:: cout << "MENU\n\tADD\n\tSEARCH\n\tEXIT\n" << "->\t";
	std:: cin >> menu;
	while (menu != "EXIT")
	{
		if (menu == "ADD")
			add(contacts);
		else if (menu == "SEARCH")
			search(contacts);
		else if (menu != "EXIT")
			std:: cout << "Please, type ADD, SEARCH or EXIT.\n" << "->\t";
		std:: cin >> menu;
	}
	std:: cout << "EXIT\n";
}
