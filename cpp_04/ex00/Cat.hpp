/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/04 17:24:33 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

# define CAT_H
# include "Animal.hpp"

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
	void	makeSound() const;
};

#endif