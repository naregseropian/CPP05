#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#define minGrade 150
#define maxGrade 1

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        ~Bureaucrat();

        const std::string& getName(void) const;
        int getGrade(void) const;

        void Increment();
        void Decrement();

        void signForm(AForm& form);
        void executeForm(AForm& form);

        class GradeTooLowException: public std::exception
        {
            public:
                GradeTooLowException(const char* msg);
		        const char* what() const throw();
            private:
                const char* _error_msg;
        };

        class GradeTooHighException: public std::exception
        {
            public:
                GradeTooHighException(const char* msg);
		        const char *what() const throw();
            private:
                const char* _error_msg;
        };

    private:
        const std::string  _name;
        int _grade;

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif