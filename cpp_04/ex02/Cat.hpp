/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:45:58 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/21 17:43:39 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

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
	~Cat();
	//operators
	Cat& operator=(const Cat& obj);
	//getter
	std::string	getBrain(int index);
	void	setBrain(int index, std::string str);
	//functions
	void	makeSound() const;
};

#endif