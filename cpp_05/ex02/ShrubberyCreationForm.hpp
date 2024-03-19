#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: virtual public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm &obj);

		void	executeSmth() const;
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& instance);

#endif