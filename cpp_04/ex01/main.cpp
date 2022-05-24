/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:15 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/24 16:48:47 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

#define ARRAY_SZ 2

void	leaks()
{
	system("leaks -q animal\n");
}

int main()
{
	atexit(leaks);
	cout << "-------------> Common test" << endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << endl;
	delete j;//should not create a leak
	delete i;
	cout << endl << "-------------> Loop test" << endl;
	Animal	*animals[ARRAY_SZ];
	for (int i = 0; i < ARRAY_SZ; i++)
	{
		if (i == (ARRAY_SZ/2 - 1))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	cout << endl;
	for (int i = 0; i < ARRAY_SZ; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
		cout << endl;
	}
	//gato=gato2
	//problemas de memoria
	//separar las memorias
	cout << "-------------> Deep test" << endl;
	Dog	*d1 = new Dog();
	Dog	*d2 = new Dog();
	cout << endl;
	d1->getBrain().setIdea(0, "Primer pensamiento de d1");
	cout << endl << "D1 -> " << d1->getBrain().getIdea(0) 
			<< " D2 -> " << d2->getBrain().getIdea(0) << endl;
	return (0);
}
