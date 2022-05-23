/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:33 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 18:10:10 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H

# define ANIMAL_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

class Animal
{
protected:
	std::string type;
public:
	//constructor
	Animal();
	Animal(std::string name);
	Animal(const Animal& obj);
	//destructor
	virtual	~Animal();
	//operators
	Animal& operator=(const Animal& obj);
	//getter
	std::string	getType() const;
	void	setType(std::string type);
	//functions
	virtual void	makeSound() const;
};

#endif
