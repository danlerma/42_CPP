/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/21 20:25:31 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	cout << endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	cout << endl;
	delete i;
	delete j;
	delete meta;
	/*
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	cout << endl;
	std::cout << i->getType() << " " << std::endl;
	cout << endl;
	i->makeSound();
	meta->makeSound();
	cout << endl;
	delete i;
	delete meta;*/
	return (0);
}
