/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:01:59 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/06 17:58:34 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H
# include <string>
class	Contact
{
public:
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
	std::string getName(){return name;};
	std::string getLastname(){return last_name;};
	std::string getNickname(){return nickname;};
	std::string getPhone(){return phone;};
	std::string getSecret(){return secret;};
	//setter
	void setName(std::string n){name = n;};
	void setLastname(std::string ln){last_name = ln;};
	void setNickname(std::string nn){nickname = nn;};
	void setPhone(std::string p){phone = p;};
	void setSecret(std::string s){secret = s;};
};

#endif
