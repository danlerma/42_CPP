/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:40:30 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/08 19:58:16 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.hpp"
//constructor
Contact::Contact()
{
	return ;
}
//destructor
Contact::~Contact()
{
	return ;
}

//getter
std::string	Contact::getName()
{
	return this->name;
}

std::string	Contact::getLastname()
{
	return this->last_name;
}
std::string	Contact::getNickname()
{
	return this->nickname;
}

std::string	Contact::getPhone()
{
	return this->phone;
}

std::string	Contact::getSecret()
{
	return this->secret;
}

//setter
void Contact::setName(std::string n)
{
	name = n;
}

void Contact::setLastname(std::string ln)
{
	last_name = ln;
}

void Contact::setNickname(std::string nn)
{
	nickname = nn;
}

void Contact::setPhone(std::string p)
{
	phone = p;
}

void Contact::setSecret(std::string s)
{
	secret = s;
}
