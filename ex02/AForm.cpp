#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeSign, int gradeExec)
    : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign > minGrade || gradeExec > minGrade)
        throw AForm::GradeTooLowException("Grade too low.");
    if (gradeSign < maxGrade || gradeExec < maxGrade)
        throw AForm::GradeTooHighException("Grade too high.");
}

AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
    *this = other;
    return;
}

AForm& AForm::operator=(const AForm& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName(void) const
{
    return _name;
}

bool AForm::getSigned(void) const
{
    return _isSigned;
}

int AForm::getGradeSigned(void) const
{
    return _gradeSign;
}

int AForm::getGradeExec(void) const
{
    return _gradeExec;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeSign)
    {
        throw AForm::GradeTooLowException("Signing grade too low!");
    }
    _isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
    AForm::checkExecuteRequirements(executor);
}

void AForm::checkExecuteRequirements(const Bureaucrat &executor) const
{
    if (!_isSigned)
        throw AForm::isNotSignedException("Form is not signed.");
    if (executor.getGrade() > _gradeExec)
        throw AForm::GradeTooLowToExcecuteException("Grade too low to execute.");
}

AForm::GradeTooLowException::GradeTooLowException(const char* msg): _error_msg(msg) {}

AForm::GradeTooHighException::GradeTooHighException(const char* msg): _error_msg(msg) {}

AForm::GradeTooLowToExcecuteException::GradeTooLowToExcecuteException(const char* msg): _error_msg(msg) {}

AForm::isNotSignedException::isNotSignedException(const char* msg): _error_msg(msg) {}

const char* AForm::GradeTooHighException::what() const throw()
{
	return _error_msg;
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return _error_msg;
}

const char* AForm::GradeTooLowToExcecuteException::what() const throw()
{
	return _error_msg;
}

const char* AForm::isNotSignedException::what() const throw()
{
	return _error_msg;
}

std::ostream& operator<<(std::ostream& os, const AForm& rhs)
{
    os << "Form name: " << rhs.getName() << std::endl
    << "Signed: " << rhs.getSigned() << std::endl
    << "Sign grade: " << rhs.getGradeSigned() << std::endl
    << "Exec grade: " << rhs.getGradeExec() << std::endl;
    return os;
}