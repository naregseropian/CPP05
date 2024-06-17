#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade)
{
    if (grade > minGrade)
        throw Bureaucrat::GradeTooLowException("Grade too low.");
    if (grade < maxGrade)
        throw Bureaucrat::GradeTooHighException("Grade too high.");
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
    return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if (this != &rhs)
    {
        _grade = rhs._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName(void) const
{
    return _name;
}

int Bureaucrat::getGrade(void) const
{
    return _grade;
}

void Bureaucrat::Increment()
{
    if (_grade <= maxGrade)
        throw Bureaucrat::GradeTooHighException("Grade too high");
    std::cout << "incrementing ..." << std::endl;
    _grade--;
}

void Bureaucrat::Decrement()
{
    if (_grade >= minGrade)
        throw Bureaucrat::GradeTooLowException("Grade too low");
    std::cout << "decrementing ..." << std::endl;
    _grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* msg): _error_msg(msg) {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return _error_msg;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* msg): _error_msg(msg) {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return _error_msg;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs)
{
    os << rhs.getName() << " | Bureaucrat Grade = " << rhs.getGrade() << "." << std::endl;
    return os;
}