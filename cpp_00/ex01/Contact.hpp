#ifndef CONTACT_HPP

# define CONTACT_HPP

#include"phonebook.hpp"

class	Contact
{
private:
	std:: string	name;
	std:: string	last_name;
	std:: string	nickname;
	std:: string	phone;
	std:: string	secret;

public:
	// Contact::Contact();
	// Contact::~Contact();
	Contact	getContact(Contact contact);
};

//CONSTRUCTOR
// Contact::Contact(/* args */)
// {
// }
// //DESTRUCTOR
// Contact::~Contact()
// {
// }

Contact	getContact(Contact contact)
{
	Contact	c;
	(void)contact;
	return (c);
}

#endif
