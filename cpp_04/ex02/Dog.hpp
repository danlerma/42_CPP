/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 19:08:18 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"

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
	void	setBrain(int index, std::string str);
	//functions
	virtual void	makeSound() const;
};

#endif