/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:19:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 20:19:07 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongAnimal_H

# define WRONGWrongAnimal_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

class WrongAnimal
{
protected:
	std::string type;
public:
	//constructor
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal& obj);
	//destructor
	~WrongAnimal();
	//operators
	WrongAnimal& operator=(const WrongAnimal& obj);
	//getter
	std::string	getType() const;
	void	setType(std::string type);
	//functions
	void	makeSound() const;
};

#endif