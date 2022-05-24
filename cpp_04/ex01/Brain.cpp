/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:19:44 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/24 16:52:38 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
	cout << "Brain: Default constructor called." << endl;
}

Brain::Brain(const Brain& obj) 
{
	cout << "Brain: Copy constructor called." << endl;
	*this = obj;
}

//destructor
Brain::~Brain()
{
	cout << "Brain: Destructor called." << endl;
}

//operator
Brain&	Brain::operator=(const Brain& obj)
{
	cout << "Brain: Assignation operator called." << endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

//functions
std::string	Brain::getIdea(int index)
{
	cout << endl << this->ideas[index] << endl;
	if (!this->ideas[index].empty())
		return this->ideas[index];
	else
		return "there is no idea";
}

void	Brain::setIdea(int index, std::string idea)
{
	cout << endl << "------------__> " << idea << endl;
	if (index < 100)
		this->ideas[index] = idea;
}
