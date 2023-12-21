/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/21 18:04:36 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"WrongCat.hpp"
#include"WrongDog.hpp"
#include"Dog.hpp"

int main()
{
	Animal *animal = new Animal();
	Animal *dog_animal = new Dog();
	Animal *cat_animal = new Cat("Sam");
	WrongAnimal *wanimal = new WrongDog();
	WrongCat *w_cat = new WrongCat();
	WrongCat wcat;

	wcat = *w_cat;
	std::cout << "------------  TEST -------------" << std::endl;
	std::cout << "animal : " << std::endl << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << "dog_animal : " << std::endl << dog_animal->getType() << std::endl;
	dog_animal->makeSound();
	std::cout << "cat_animal : " << std::endl << cat_animal->getType() << std::endl;
	cat_animal->makeSound();
	std::cout << "wanimal : " << std::endl << wanimal->getType() << std::endl;
	wanimal->makeSound();
	std::cout << "wcat : " << std::endl << wcat.getType() << std::endl;
	wcat.makeSound();
	std::cout << std::endl;
	delete animal;
	delete wanimal;
	delete w_cat;
	delete dog_animal;
	delete cat_animal;
	system("leaks -q animal");
	return (0);
}
