/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:46:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/21 17:44:02 by dlerma-c         ###   ########.fr       */
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
	~Dog();
	//operators
	Dog& operator=(const Dog& obj);
	//getter y setter
	std::string	getBrain(int index);
	void	setBrain(int index, std::string str);
	//functions
	void	makeSound() const;
};

#endif