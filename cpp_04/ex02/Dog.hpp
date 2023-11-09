/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/25 11:03:40 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"

using	std::cout;
using	std::endl;

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	//constructor
	Dog();
	Dog(std::string name);
	Dog(const Dog& obj);
	//destructor
	virtual	~Dog();
	//operators
	Dog& operator=(const Dog& obj);
	//getter y setter
	std::string	getBrain(int index);
	void	setBrain(int index, std::string idea);
	//functions
	virtual void	makeSound() const;
};

#endif