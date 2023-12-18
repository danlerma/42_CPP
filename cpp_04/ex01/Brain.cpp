/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:19:44 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/12 19:11:03 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea Brain";
}

Brain::Brain(const Brain& obj) 
{
	std::cout << "Brain: Copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

//destructor
Brain::~Brain()
{
	std::cout << "Brain: Destructor called." << std::endl;
}

//operator
Brain&	Brain::operator=(const Brain& obj)
{
	std::cout << "Brain: Assignation operator called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}

//functions
std::string	Brain::getIdea(int index)
{
	if (!this->ideas[index].empty())
		return this->ideas[index];
	else
		return "there is no idea";
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 100 && index > -1)
		this->ideas[index] = idea;
}
