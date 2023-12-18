/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/12 18:36:13 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Dog.hpp"

int main()
{
	Animal *animal = new Animal();
	Animal *dog_animal = new Dog();
	Animal *cat_animal = new Cat("Sam");

	std::cout << "------------  SIMPLE TEST -------------" << std::endl;
	std::cout << "animal : " << std::endl << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << "dog_animal : " << std::endl << dog_animal->getType() << std::endl;
	dog_animal->makeSound();
	std::cout << "cat_animal : " << std::endl << cat_animal->getType() << std::endl;
	cat_animal->makeSound();
	std::cout << std::endl;
	delete animal;
	delete dog_animal;
	delete cat_animal;

	// std::cout << std::endl << "------------  CHANGES TEST -------------" << std::endl;
	// Animal *a_animal = new Animal();
	// Animal *d_animal = new Dog();
	// Cat *c_animal = new Cat("Sam");
	// Animal *c_animal2 = new Cat(*c_animal);
	// std::cout << "a_animal : " << std::endl << a_animal->getType() << std::endl;
	// a_animal->makeSound();
	// std::cout << "d_animal : " << std::endl << d_animal->getType() << std::endl;
	// d_animal->makeSound();
	// std::cout << "c_animal : " << std::endl << c_animal->getType() << std::endl;
	// c_animal->makeSound();
	// std::cout << "c_animal2 : " << std::endl << c_animal2->getType() << std::endl;
	// std::cout << "change type : " << c_animal2->getType() << std::endl;
	// c_animal2->makeSound();
	// std::cout << std::endl;
	// delete a_animal;
	// delete d_animal;
	// delete c_animal;
	// delete c_animal2;

	// std::cout << std::endl << "------------  DEEP TEST -------------" << std::endl;
	// Animal *a = new Animal("Hipopotamo");
	// Animal *c = new Animal();
	// // Dog *d = new Animal(); //error
	// Dog *e = new Dog("Toby");
	// Dog *f =new Dog();
	// Dog *g =new Dog(*f);
	// Animal *b = new Dog(*f);
	// Cat *h = new Cat("Sam");
	// Cat *i =new Cat(*h);

	// Animal z = *f;

	// (void)z;
	// std::cout << "a : " << a->getType() << std::endl;
	// a->makeSound();
	// std::cout << "c : " << c->getType() << std::endl;
	// c->makeSound();
	// std::cout << "e : " << e->getType() << std::endl;
	// e->makeSound();
	// std::cout << "f : " << f->getType() << std::endl;
	// f->makeSound();
	// std::cout << "b : " << b->getType() << std::endl;
	// b->makeSound();
	// std::cout << "h : " << h->getType() << std::endl;
	// h->makeSound();
	// std::cout << "i : " << i->getType() << std::endl;
	// i->makeSound();
	// std::cout << "g : " << g->getType() << std::endl;
	// g->makeSound();
	// std::cout << std::endl << "........PRUEBAS........." << std::endl;
	// f = e;
	// std::cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t\t" << "b : " << b->getType() << "\t\t" << "z : " << z.getType() << std::endl;
	// std::cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t\t" << "b : " << b->getType() << "\t\t" << "z : " << z.getType() << std::endl;
	// std::cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t\t" << "b : " << b->getType() << "\t\t" << "z : " << z.getType() << std::endl;
	// std::cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t" << "b : " << b->getType() << "\tz : " << z.getType() << std::endl;
	// delete a;
	// delete c;
	// delete e;
	// // delete f;
	// delete h;
	// delete i;
	// delete g;

	WrongAnimal uno;
	WrongDog dos;


	return (0);
}
