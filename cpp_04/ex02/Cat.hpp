/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 18:10:01 by dlerma-c         ###   ########.fr       */
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
	virtual	~Cat();
	//operators
	Cat& operator=(const Cat& obj);
	//functions
	virtual void	makeSound() const;
};

#endif