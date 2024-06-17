#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class Form
{
    public:
        Form(const std::string& name, int gradeSign, int gradeExec);
        Form(const Form& other);
        Form& operator=(const Form& rhs);
        ~Form();

        const std::string& getName(void) const;
        bool getSigned(void) const;
        int getGradeSigned(void) const;
        int getGradeExec(void) const;

        void beSigned(Bureaucrat& bureaucrat);

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
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeSign;
        const int           _gradeExec;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif