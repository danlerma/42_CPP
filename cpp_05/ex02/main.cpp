/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:09:36 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/09 16:18:48 by dlerma-c         ###   ########.fr       */
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

static void	O_Form()
{
	Form	*form1 = new Form();
	Form	*form2 = new Form(30, 75, "Formulario");
	Form	*form3 = new Form(*form1);
	Form	form4;
	Bureaucrat	*bur = new Bureaucrat(50, "Juan Carlos");

	std::cout <<std::endl;
	std::cout<<"Form "<<form1->getName()<<" tiene el grado para firmar "<<form1->getS_grade()<<" y el grado para ejecutar "<<form1->getEx_grade()<<" la firma es "<<form1->getSign()<<std::endl;
	form1->beSigned(*bur);
	form1->beSigned(*bur);
	std::cout<<"Form "<<form1->getName()<<" tiene el grado para firmar "<<form1->getS_grade()<<" y el grado para ejecutar "<<form1->getEx_grade()<<" la firma es "<<form1->getSign()<<std::endl<<std::endl;
	std::cout<<"Form "<<form2->getName()<<" tiene el grado para firmar "<<form2->getS_grade()<<" y el grado para ejecutar "<<form2->getEx_grade()<<" la firma es "<<form2->getSign()<<std::endl;
	bur->signForm(*form2);
	std::cout<<"Form "<<form2->getName()<<" tiene el grado para firmar "<<form2->getS_grade()<<" y el grado para ejecutar "<<form2->getEx_grade()<<" la firma es "<<form2->getSign()<<std::endl<<std::endl;
	bur->signForm(*form3);
	std::cout<<"Form "<<form3->getName()<<" tiene el grado para firmar "<<form3->getS_grade()<<" y el grado para ejecutar "<<form3->getEx_grade()<<" la firma es "<<form3->getSign()<<std::endl<<std::endl;
	form4 = *form2;
	std::cout<<"Form "<<form4.getName()<<" tiene el grado para firmar "<<form4.getS_grade()<<" y el grado para ejecutar "<<form4.getEx_grade()<<" la firma es "<<form4.getSign()<<std::endl;
	try{
		bur->increment(50);
	} catch (const Bureaucrat::GradeTooHighException ex){
		std::cerr << ex.what() << '\n';
	}
	try{
		bur->increment(49);
		bur->signForm(form4);
	} catch (const Bureaucrat::GradeTooHighException ex){
		std::cerr << ex.what() << '\n';
	}
	std::cout<<"Form "<<form4.getName()<<" tiene el grado para firmar "<<form4.getS_grade()<<" y el grado para ejecutar "<<form4.getEx_grade()<<" la firma es "<<form4.getSign()<<std::endl<<std::endl;
	delete form1;
	delete form2;
	delete form3;
	delete bur;
}

int main(void)
{
	std::cout<<"------------- Errores en Bureaucrat (decrement increment) -------------"<<std::endl;
	O_Bureaucrat();
	std::cout<<"------------- Errores en Form (be signed) -------------"<<std::endl;
	O_Form();
	return (0);
}
