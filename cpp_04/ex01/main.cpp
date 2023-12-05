/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/05 19:41:37 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

#define ARRAY_SZ 10

void	leaks()
{
	system("leaks -q animal");
}

int main()
{
	Animal *animal = new Animal();
	Animal *dog_animal = new Dog();
	Animal *cat_animal = new Cat();

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

	std::cout << std::endl << "------------  CHANGES TEST -------------" << std::endl;
	Animal *a_animal = new Animal();
	Animal *d_animal = new Dog();
	Cat *c_animal = new Cat("Sam");
	Animal *c_animal2 = new Cat(*c_animal);
	std::cout << "a_animal : " << std::endl << a_animal->getType() << std::endl;
	a_animal->makeSound();
	std::cout << "d_animal : " << std::endl << d_animal->getType() << std::endl;
	d_animal->makeSound();
	std::cout << "c_animal : " << std::endl << c_animal->getType() << std::endl;
	c_animal->makeSound();
	std::cout << "c_animal2 : " << std::endl << c_animal2->getType() << std::endl;
	std::cout << "change type : " << c_animal2->getType() << std::endl;
	c_animal2->makeSound();
	std::cout <<"1"<< std::endl;
	delete a_animal;
	std::cout <<"2"<< std::endl;
	delete d_animal;
	std::cout <<"3"<< std::endl;
	delete c_animal2;
	std::cout <<" " << c_animal << std::endl;
	// delete c_animal;

	std::cout << std::endl << "------------  ARRAY TEST -------------" << std::endl;
	Animal *manada[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			manada[i] = new Cat();
		else
			manada[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << manada[2]->getType() << std::endl;
	std::cout << manada[3]->getType() << std::endl;
	std::cout << std::endl;
	for (int j = 0; j < 10; j++)
	{
		delete manada[j];
		std::cout << std::endl;
	}

	std::cout << std::endl << "------------  DEEP TEST -------------" << std::endl;
	Animal *a = new Animal("Hipopotamo");
	Animal *c = new Animal();
	// Dog *d = new Animal(); //error
	Dog *e = new Dog("Toby");
	Dog *f =new Dog();
	Animal *b = new Dog();
	Cat *h = new Cat("Sam");
	Cat *i =new Cat(*h);

	Animal z = *f; //estatica se destruye al final

	std::cout << "a : " << a->getType() << std::endl;
	a->makeSound();
	std::cout << "c : " << c->getType() << std::endl;
	c->makeSound();
	std::cout << "e : " << e->getType() << std::endl;
	e->makeSound();
	std::cout << "f : " << f->getType() << std::endl;
	f->makeSound();
	std::cout << "b : " << b->getType() << std::endl;
	b->makeSound();
	std::cout << "h : " << h->getType() << std::endl;
	h->makeSound();
	std::cout << "i : " << i->getType() << std::endl;
	i->makeSound();
	delete f;
	f = e;
	std::cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "b : " << b->getType() << "\tz : " << z.getType() << std::endl;
	delete a;
	delete b;
	delete c;
	delete e;
	delete h;
	// delete i;
	// delete g;//seg
	std::cout << std::endl << "........BRAIN........." << std::endl;
	Cat *c_brain = new Cat();
	Cat *c_brain2 = new Cat();

	delete c_brain2;
	*c_brain2 = *c_brain;
	std::cout << "Idea 0 (c_brain): " << c_brain->getBrain(0) << std::endl;
	std::cout << "Idea 1 (c_brain): " << c_brain->getBrain(1) << std::endl;
	std::cout << "Idea 2 (c_brain): " << c_brain->getBrain(2) << std::endl << std::endl;
	std::cout << "Idea 0 (c_brain2): " << c_brain2->getBrain(0) << std::endl;
	std::cout << "Idea 1 (c_brain2): " << c_brain2->getBrain(1) << std::endl;
	std::cout << "Idea 2 (c_brain2): " << c_brain2->getBrain(2) << std::endl << std::endl;;

	c_brain2->setBrain(0, "HOLA");
	c_brain2->setBrain(2, "Chao");
	std::cout << "Idea 0 (c_brain): " << c_brain->getBrain(0) << std::endl;
	std::cout << "Idea 1 (c_brain): " << c_brain->getBrain(1) << std::endl;
	std::cout << "Idea 2 (c_brain): " << c_brain->getBrain(2) << std::endl << std::endl;
	std::cout << "Idea 0 (c_brain2): " << c_brain2->getBrain(0) << std::endl;
	std::cout << "Idea 1 (c_brain2): " << c_brain2->getBrain(1) << std::endl;
	std::cout << "Idea 2 (c_brain2): " << c_brain2->getBrain(2) << std::endl << std::endl;

	delete c_brain;
	system("leaks -q animal\n");
	return (0);
}
