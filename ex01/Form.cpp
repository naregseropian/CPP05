#include "Form.hpp"

Form::Form(const std::string& name, int gradeSign, int gradeExec)
    : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign > minGrade || gradeExec > minGrade)
        throw Form::GradeTooLowException("Grade too low.");
    if (gradeSign < maxGrade || gradeExec < maxGrade)
        throw Form::GradeTooHighException("Grade too high.");
}

Form::Form(const Form& other)
    : _name(other._name), _isSigned(other._isSigned), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
    *this = other;
    return;
}

Form& Form::operator=(const Form& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    return *this;
}

Form::~Form() {}

const std::string& Form::getName(void) const
{
    return _name;
}

bool Form::getSigned(void) const
{
    return _isSigned;
}

int Form::getGradeSigned(void) const
{
    return _gradeSign;
}

int Form::getGradeExec(void) const
{
    return _gradeExec;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeSign)
    {
        throw Form::GradeTooLowException("Signing grade too low!");
    }
    std::cout << std::endl << "signing..." << std::endl;
    _isSigned = true;
}

Form::GradeTooLowException::GradeTooLowException(const char* msg): _error_msg(msg) {}

const char* Form::GradeTooLowException::what() const throw()
{
	return _error_msg;
}

Form::GradeTooHighException::GradeTooHighException(const char* msg): _error_msg(msg) {}

const char* Form::GradeTooHighException::what() const throw()
{
	return _error_msg;
}

std::ostream& operator<<(std::ostream& os, const Form& rhs)
{
    os << "Form name: " << rhs.getName() << std::endl
    << "Signed: " << rhs.getSigned() << std::endl
    << "Sign grade: " << rhs.getGradeSigned() << std::endl
    << "Exec grade: " << rhs.getGradeExec() << std::endl;
    return os;
}