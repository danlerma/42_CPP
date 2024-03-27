/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:13:12 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/09 15:38:07 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP

# define AFORM_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
// # include "PresidentialPardonForm.hpp"
// # include "RobotomyRequestForm.hpp"
// # include "ShrubberyCreationForm.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool	sign;
		const int	s_grade;
		const int	ex_grade;
	public:
		AForm(); //Default
		virtual ~AForm(); // Destructor
		AForm(int sgrade, int exgrade, std::string nam);
		AForm(const AForm &obj);
		AForm& operator=(AForm &obj);

		std::string	const getName() const;
		bool	getSign() const;
		int	getS_grade() const; 
		int	getEx_grade() const;
		void	beSigned(Bureaucrat &obj);
		bool	execute(Bureaucrat const & executor) const;
		virtual void	executeSmth() const = 0;
		
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
};


std::ostream& operator<<(std::ostream& os, const AForm& instance);

#endif