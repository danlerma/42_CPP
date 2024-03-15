/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:09:36 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/15 18:18:38 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	*bur1 = new Bureaucrat();
	Bureaucrat	*bur2 = new Bureaucrat(30, "Rodolfo");
	Bureaucrat	*bur3 = new Bureaucrat(*bur1);
	Bureaucrat	bur4;

	std::cout <<std::endl;
	try{
		Bureaucrat cons1(160, "cosntructor ex");
	} catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		Bureaucrat cons2(0, "cosntructor ex2");
	} catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}

	std::cout<<"El burocrata "<<bur1->getName()<<" tiene el grado "<<bur1->getGrade()<<std::endl;
	try{
		bur1->decrement(20);
	} catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur1->getName()<<" tiene el grado "<<bur1->getGrade()<<std::endl<<std::endl;
	std::cout<<"El burocrata "<<bur2->getName()<<" tiene el grado "<<bur2->getGrade()<<std::endl;
	try{
		bur2->increment(40);
	} catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur2->getName()<<" tiene el grado "<<bur2->getGrade()<<std::endl<<std::endl;
	std::cout<<"El burocrata "<<bur3->getName()<<" tiene el grado "<<bur3->getGrade()<<std::endl;
	try{
		bur3->decrement(160);
	} catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur3->getName()<<" tiene el grado "<<bur3->getGrade()<<std::endl<<std::endl;
	bur4 = *bur2;
	std::cout<<"El burocrata "<<bur4.getName()<<" tiene el grado "<<bur4.getGrade()<<std::endl;
	try{
		bur4.increment(1);
	} catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur4.getName()<<" tiene el grado "<<bur4.getGrade()<<std::endl<<std::endl;
	delete bur1;
	delete bur2;
	delete bur3;
	return (0);
}
