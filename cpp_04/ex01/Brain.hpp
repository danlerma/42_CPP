/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:04:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/23 14:12:21 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H

# define BRAIN_H
# include "Animal.hpp"

using	std::cout;
using	std::endl;

class Brain
{
private:
	std::string	ideas[100];
public:
	//constructor
	Brain();
	Brain(std::string name);
	Brain(const Brain& obj);
	//destructor
	virtual	~Brain();
	//operators
	Brain& operator=(const Brain& obj);
	//functions
	std::string	getIdea(int index);
	void	setIdea(int index, std::string idea);
};

#endif