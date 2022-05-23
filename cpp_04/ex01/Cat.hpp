/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/23 18:08:01 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

using	std::cout;
using	std::endl;

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	//constructor
	Cat();
	Cat(std::string name);
	Cat(const Cat& obj);
	//destructor
	virtual	~Cat();
	//operators
	Cat& operator=(const Cat& obj);
	//getter
	Brain	getBrain();
	//functions
	virtual void	makeSound() const;
};

#endif