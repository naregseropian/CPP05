#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <unistd.h>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		class RobotomyFailure;

		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();

		const std::string& getTarget(void) const;
		void robotomize(void) const;
		void execute(const Bureaucrat& executor) const;
	
    private:
		std::string	_target;
};

#endif