/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:13:12 by dlerma-c          #+#    #+#             */
/*   Updated: 2023/11/20 13:33:13 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP

# define AFORM_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

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

		virtual std::string	getName() = 0;
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


std::ostream& operator<<(std::ostream& os, const AForm& instance);

#endif