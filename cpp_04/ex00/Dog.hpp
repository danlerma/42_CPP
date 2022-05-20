/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/20 16:50:59 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

# define DOG_H
# include "Animal.hpp"

using	std::cout;
using	std::endl;

class Dog : public Animal
{
public:
	//constructor
	Dog();
	Dog(std::string name);
	Dog(const Dog& obj);
	//destructor
	~Dog();
	//operators
	Dog& operator=(const Dog& obj);
	//functions
	void	makeSound();
};

#endif