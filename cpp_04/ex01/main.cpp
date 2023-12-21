/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/12/21 18:04:35 by dlerma-c         ###   ########.fr       */
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

	std::cout << std::endl << "------------  ARRAY TEST -------------" << std::endl;
	Animal *grupo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			grupo[i] = new Cat();
		else
			grupo[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << grupo[2]->getType() << std::endl;
	std::cout << grupo[3]->getType() << std::endl;
	std::cout << std::endl;
	for (int j = 0; j < 10; j++)
	{
		delete grupo[j];
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
	std::cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "\tz : " << z.getType() << std::endl;
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

	Cat este;

	std::cout << "Idea 0 (este): " << este.getBrain(0) << std::endl;
	std::cout << "Idea 1 (este): " << este.getBrain(1) << std::endl;
	std::cout << "Idea 2 (este): " << este.getBrain(2) << std::endl << std::endl;

	este.setBrain(0, "cero");
	este.setBrain(1, "uno");
	este.setBrain(2, "dos");

	Cat otro(este);

	std::cout << "Repeat print after changing ideas: " << std::endl;
	std::cout << "Idea 0 (otro): " << otro.getBrain(0) << std::endl;
	std::cout << "Idea 1 (otro): " << otro.getBrain(1) << std::endl;
	std::cout << "Idea 2 (otro): " << otro.getBrain(2) << std::endl;
	std::cout << "Idea 0 (este): " << este.getBrain(0) << std::endl;
	std::cout << "Idea 1 (este): " << este.getBrain(1) << std::endl;
	std::cout << "Idea 2 (este): " << este.getBrain(2) << std::endl << std::endl;


	este.setBrain(0, "PROBANDO DEEP COPY1");
	este.setBrain(1, "PROBANDO DEEP COPY2");
	este.setBrain(2, "PROBANDO DEEP COPY3");

	std::cout << "Repeat print after changing ideas agaiiiiiiin: " << std::endl;
	std::cout << "Idea 0 (otro): " << otro.getBrain(0) << std::endl;
	std::cout << "Idea 1 (otro): " << otro.getBrain(1) << std::endl;
	std::cout << "Idea 2 (otro): " << otro.getBrain(2) << std::endl;
	std::cout << "Idea 0 (este): " << este.getBrain(0) << std::endl;
	std::cout << "Idea 1 (este): " << este.getBrain(1) << std::endl;
	std::cout << "Idea 2 (este): " << este.getBrain(2) << std::endl << std::endl;

	delete c_brain;
	system("leaks -q animal");
	return (0);
}
