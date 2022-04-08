/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:01:59 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/08 16:43:03 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H
# include <string>
class	Contact
{
private:
	std:: string	name;
	std:: string	last_name;
	std:: string	nickname;
	std:: string	phone;
	std:: string	secret;

public:
	//constructor y destructor
	Contact();
	~Contact();
	//getter
	std::string getName();
	std::string getLastname();
	std::string getNickname();
	std::string getPhone();
	std::string getSecret();
	//setter
	void setName(std::string n);
	void setLastname(std::string ln);
	void setNickname(std::string nn);
	void setPhone(std::string p);
	void setSecret(std::string s);
};

#endif
