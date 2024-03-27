/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:16:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/15 17:55:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	name;
		int	grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(int grade, std::string nam);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat&	obj);
		const std::string	&getName() const;
		int	getGrade() const; //solo lectura el const despues de la funcion
		void	setGrade(int grade);
		void	increment(int grade);
		void	decrement(int grade);
		void	signForm(AForm &sig);
		void	executeForm(AForm const & form);
		
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	NotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance);

#endif
