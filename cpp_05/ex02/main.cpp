/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:09:36 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/19 19:46:03 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void	O_Bureaucrat()
{
	Bureaucrat	*bur1 = new Bureaucrat();
	std::cout << "------" << std::endl;
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
}

void	O_file()
{
	Bureaucrat max_bur(1,"MAX_GRADE_BUR");
	Bureaucrat min_bur(150,"MIN_GRADE_BUR");
	ShrubberyCreationForm *tree_file = new ShrubberyCreationForm("TREE_FILE");
	RobotomyRequestForm *robot = new RobotomyRequestForm("ROBOT_RANDOM");
	PresidentialPardonForm *president = new PresidentialPardonForm("ROBOT_RANDOM");
	
	std::cout << "----------- Pruebas TREE -------------" << std::endl;
	try{
		min_bur.signForm(*tree_file);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		min_bur.executeForm(*tree_file);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.signForm(*tree_file);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.signForm(*tree_file);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		min_bur.executeForm(*tree_file);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.executeForm(*tree_file);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}


	std::cout << std::endl << "----------- Pruebas ROBOT -------------" << std::endl;
	try{
		min_bur.signForm(*robot);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		min_bur.executeForm(*robot);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.signForm(*robot);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.signForm(*robot);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		min_bur.executeForm(*robot);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.executeForm(*robot);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}

std::cout << std::endl << "----------- Pruebas ROBOT -------------" << std::endl;
	try{
		min_bur.signForm(*president);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		min_bur.executeForm(*president);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.signForm(*president);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.signForm(*president);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		min_bur.executeForm(*president);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		max_bur.executeForm(*president);
	
	}catch (std::exception& ex){
		std::cerr << ex.what() << '\n';
	}


}

int main(void)
{
	std::cout << false << "-" << true << std::endl;
	std::cout<<"------------- Errores en Bureaucrat (decrement increment) -------------"<<std::endl;
	O_Bureaucrat();
	std::cout<<"------------- Errores en Form (be signed) -------------"<<std::endl;
	// O_Form();
	std::cout<<"------------- Errores en File -------------"<<std::endl;
	O_file();
	return (0);
}
