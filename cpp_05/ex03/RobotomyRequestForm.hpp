#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: virtual public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm& operator=(RobotomyRequestForm &obj);

		void	executeSmth() const;
};

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& instance);

#endif