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
	Animal *animal = new Animal();
	Animal *dog_animal = new Dog();
	Animal *cat_animal = new Cat("Sam");

	cout << "------------  SIMPLE TEST -------------" << endl;
	cout << "animal : " << endl << animal->getType() << endl;
	animal->makeSound();
	cout << "dog_animal : " << endl << dog_animal->getType() << endl;
	dog_animal->makeSound();
	cout << "cat_animal : " << endl << cat_animal->getType() << endl;
	cat_animal->makeSound();
	cout << endl;
	delete animal;
	delete dog_animal;
	delete cat_animal;

	cout << endl << "------------  CHANGES TEST -------------" << endl;
	Animal *a_animal = new Animal();
	Animal *d_animal = new Dog();
	Cat *c_animal = new Cat("Sam");
	Animal *c_animal2 = new Cat(*c_animal);
	cout << "a_animal : " << endl << a_animal->getType() << endl;
	a_animal->makeSound();
	cout << "d_animal : " << endl << d_animal->getType() << endl;
	d_animal->makeSound();
	cout << "c_animal : " << endl << c_animal->getType() << endl;
	c_animal->makeSound();
	cout << "c_animal2 : " << endl << c_animal2->getType() << endl;
	cout << "change type : " << c_animal2->getType() << endl;
	c_animal2->makeSound();
	cout << endl;
	delete a_animal;
	delete d_animal;
	delete c_animal;
	delete c_animal2;

	cout << endl << "------------  DEEP TEST -------------" << endl;
	Animal *a = new Animal("Hipopotamo");
	Animal *c = new Animal();
	// Dog *d = new Animal(); //error
	Dog *e = new Dog("Toby");
	Dog *f =new Dog();
	Dog *g =new Dog(*f);
	Animal *b = new Dog(*f);
	Cat *h = new Cat("Sam");
	Cat *i =new Cat(*h);

	Animal z = *f;

	(void)z;
	cout << "a : " << a->getType() << endl;
	a->makeSound();
	cout << "c : " << c->getType() << endl;
	c->makeSound();
	cout << "e : " << e->getType() << endl;
	e->makeSound();
	cout << "f : " << f->getType() << endl;
	f->makeSound();
	cout << "b : " << b->getType() << endl;
	b->makeSound();
	cout << "h : " << h->getType() << endl;
	h->makeSound();
	cout << "i : " << i->getType() << endl;
	i->makeSound();
	cout << "g : " << g->getType() << endl;
	g->makeSound();
	cout << endl << "........PRUEBAS........." << endl;
	f = e;
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t\t" << "b : " << b->getType() << "\t\t" << "z : " << z.getType() << endl;
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t\t" << "b : " << b->getType() << "\t\t" << "z : " << z.getType() << endl;
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t\t" << "b : " << b->getType() << "\t\t" << "z : " << z.getType() << endl;
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << "\t" << "b : " << b->getType() << "\tz : " << z.getType() << endl;
	delete a;
	delete c;
	delete e;
	// delete f;
	delete h;
	delete i;
	delete g;
	return (0);
}
