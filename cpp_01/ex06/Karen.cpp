/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:01:43 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 16:24:13 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Karen.hpp"

//constructor
Karen::Karen()
{
}

//destructor
Karen::~Karen()
{
}

//functions
void	Karen::debug()
{
	cout << "DEBUG: I love to get extra bacon for my" 
		<<	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << endl;
}

void	Karen::info()
{
	cout << "INFO: I cannot believe adding extra bacon cost more money. " 
		<<	"You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void	Karen::warning()
{
	cout << "WARNING: I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started "
		<< "working here last month." << endl;
}

void	Karen::error()
{
	cout << "ERROR: This is unacceptable, I want to speak to the manager now" << endl;
}

void	Karen::complain(std::string level)
{
	std::string	str[4];
	someFuncions fun[] =
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error

	};

	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
	
	for (size_t i = 0; i < str->size(); i++)
	{
		if (str[i] == level)
		{
			switch (i)
			{
				case 0:
					(this->*(fun[0]))();
				case 1:
					(this->*(fun[1]))();
				case 2:
					(this->*(fun[2]))();
				case 3:
					(this->*(fun[3]))();
			}
			return ;
		}
	}
	cout << "Invalid argument" << endl;
}
