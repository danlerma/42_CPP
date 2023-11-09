/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/31 16:16:29 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

#define ARRAY_SZ 10

void	leaks()
{
	system("leaks -q animal\n");
}

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
	c_animal2->setType("Dominica");
	cout << "change type : " << c_animal2->getType() << endl;
	c_animal2->makeSound();
	cout << endl;
	delete a_animal;
	delete d_animal;
	delete c_animal;
	delete c_animal2;

	cout << endl << "------------  DEEP TEST -------------" << endl;
	Animal *a = new Animal("Hipopotamo");
	// Animal *b = new Dog(*a); //error
	Animal *c = new Animal();
	// Dog *d = new Animal(); //error
	Dog *e = new Dog("Toby");
	Dog *f =new Dog();
	Dog *g =new Dog(*f);
	Cat *h = new Cat("Sam");
	Cat *i =new Cat(*h);
	cout << "a : " << endl << a->getType() << endl;
	a->makeSound();
	cout << "c : " << endl << c->getType() << endl;
	c->makeSound();
	cout << "e : " << endl << e->getType() << endl;
	e->makeSound();
	cout << "f : " << endl << f->getType() << endl;
	f->makeSound();
	cout << "h : " << endl << h->getType() << endl;
	h->makeSound();
	cout << "i : " << endl << i->getType() << endl;
	i->makeSound();
	cout << "g : " << endl << g->getType() << endl;
	g->makeSound();
	cout << endl << "........PRUEBAS" << endl;
	f = e;
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << endl;
	e->setType("Rober");
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << endl;
	f->setType("Fernan");
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << endl;
	g->setType("Golf");
	cout << "e : " << e->getType() << "\t" << "f : " << f->getType() << "\t" << "g : " << g->getType() << endl;
	delete a;
	delete c;
	delete e;
	// delete f;
	delete h;
	delete i;
	delete g;





	// // atexit(leaks);
	// cout << "-------------> Common test" << endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// cout << endl;
	// delete j;//should not create a leak
	// delete i;
	// cout << endl << "-------------> Loop test" << endl;
	// Animal	*animals[ARRAY_SZ];
	// for (int i = 0; i < ARRAY_SZ; i++)
	// {
	// 	if (i <= (ARRAY_SZ/2 - 1))
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// }
	// cout << endl;
	// for (int i = 0; i < ARRAY_SZ; i++)
	// {
	// 	cout << i << " -> ";
	// 	animals[i]->makeSound();
	// 	delete animals[i];
	// 	cout << endl;
	// }
	// //gato=gato2
	// //problemas de memoria
	// //separar las memorias
	// cout << "-------------> Deep test" << endl;
	// Dog	*d1 = new Dog(); //default constructor
	// Animal	*d2 = new Dog("Roger"); //Param constuctor
	// // Animal	*d3 = new Dog(*d2); //Copy constructor
	// Dog	*d4 = d1; //assignation operator
	// cout << endl;
	// cout << "D1 -> " << d1->getType() << endl;
	// cout << "D2 -> " << d2->getType() << endl;
	// // cout << "D3 -> " << d3->getType() << endl;
	// cout << "D4 -> " << d4->getType() << endl << endl;
	// delete d1;
	// // delete d2; da problemas
	// system("leaks -q animal\n");
	return (0);
}
