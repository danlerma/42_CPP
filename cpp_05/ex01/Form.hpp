/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:13:12 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/09 15:38:07 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP

# define FORM_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool	sign;
		const int	s_grade;
		const int	ex_grade;
	public:
		Form(); //Default
		~Form(); // Destructor
		Form(int sgrade, int exgrade, std::string nam);
		Form(const Form &obj);
		Form& operator=(Form &obj);

		std::string	getName();
		bool	getSign();
		int	getS_grade();
		int	getEx_grade();
		void	beSigned(Bureaucrat &obj);
		
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


std::ostream& operator<<(std::ostream& os, const Form& instance);

#endif