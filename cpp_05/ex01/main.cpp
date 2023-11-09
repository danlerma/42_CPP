/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:09:36 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/09 14:38:28 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

static void	O_Bureaucrat()
{
	Bureaucrat	*bur1 = new Bureaucrat();
	Bureaucrat	*bur2 = new Bureaucrat(30, "Rodolfo");
	Bureaucrat	*bur3 = new Bureaucrat(*bur1);
	Bureaucrat	bur4;

	std::cout <<std::endl;
	std::cout<<"El burocrata "<<bur1->getName()<<" tiene el grado "<<bur1->getGrade()<<std::endl;
	try{
		bur1->decrement(20);
	} catch (const Bureaucrat::GradeTooLowException ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur1->getName()<<" tiene el grado "<<bur1->getGrade()<<std::endl<<std::endl;
	std::cout<<"El burocrata "<<bur2->getName()<<" tiene el grado "<<bur2->getGrade()<<std::endl;
	try{
		bur2->increment(40);
	} catch (const Bureaucrat::GradeTooHighException ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur2->getName()<<" tiene el grado "<<bur2->getGrade()<<std::endl<<std::endl;
	std::cout<<"El burocrata "<<bur3->getName()<<" tiene el grado "<<bur3->getGrade()<<std::endl;
	try{
		bur3->decrement(160);
	} catch (const Bureaucrat::GradeTooLowException ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur3->getName()<<" tiene el grado "<<bur3->getGrade()<<std::endl<<std::endl;
	bur4 = *bur2;
	std::cout<<"El burocrata "<<bur4.getName()<<" tiene el grado "<<bur4.getGrade()<<std::endl;
	try{
		bur4.increment(1);
	} catch (const Bureaucrat::GradeTooHighException ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"El burocrata "<<bur4.getName()<<" tiene el grado "<<bur4.getGrade()<<std::endl<<std::endl;
	delete bur1;
	delete bur2;
	delete bur3;
}

int main(void)
{
	std::cout<<"------------- Errores en Bureaucrat (decrement increment) -------------"<<std::endl;
	O_Bureaucrat();
	std::cout<<"------------- Errores en Form (be signed) -------------"<<std::endl;
	std::cout<<"------------- Errores en Bureaucrat y Form (decrement increment besinged) -------------"<<std::endl;
	return (0);
}
