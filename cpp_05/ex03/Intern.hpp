/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:16:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2024/03/15 17:55:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP

# define INTERN_HPP
# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& obj);
		Intern&	operator=(const Intern&	obj);

		AForm	*makeForm(std::string name, std::string target);
};

std::ostream& operator<<(std::ostream& os, const Intern& instance);

#endif
