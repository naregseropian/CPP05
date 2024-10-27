#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
        : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
        : AForm(other.getName(), other.getGradeSigned(), other.getGradeExec()), _target(other.getTarget())
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const std::string& PresidentialPardonForm::getTarget(void) const
{
    return _target;

}

void PresidentialPardonForm::Zaphod(void) const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    AForm::checkExecuteRequirements(executor);
    Zaphod();
}