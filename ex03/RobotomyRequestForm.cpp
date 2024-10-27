#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
        : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
        : AForm(other.getName(), other.getGradeSigned(), other.getGradeExec()), _target(other.getTarget())
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

const std::string& RobotomyRequestForm::getTarget(void) const
{
    return _target;
}

void RobotomyRequestForm::robotomize(void) const
{
    srand((unsigned int)time(NULL));
    int num = rand() % 100;

	for (int i = 0; i < 2; ++i)
    {
		std::cout << "rizzzzzzzzzzzzzz, bzzzzzzzzzzzzzzz" << std::endl;
		sleep(1);
    }
	if (num % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->_target << " has been robotomized unsuccessfully!" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    AForm::checkExecuteRequirements(executor);
    robotomize();
}