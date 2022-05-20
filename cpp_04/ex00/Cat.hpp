/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/20 16:51:05 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

# define CAT_H
# include "Animal.hpp"

using	std::cout;
using	std::endl;

class Cat : public Animal
{
public:
	//constructor
	Cat();
	Cat(std::string name);
	Cat(const Cat& obj);
	//destructor
	~Cat();
	//operators
	Cat& operator=(const Cat& obj);
	//functions
	void	makeSound();
};

#endif