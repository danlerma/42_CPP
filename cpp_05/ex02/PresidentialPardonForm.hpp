#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: virtual public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm& operator=(PresidentialPardonForm &obj);

		void	executeSmth() const;
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& instance);

#endif