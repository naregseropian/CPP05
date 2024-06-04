#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class AForm
{
    public:
        AForm(const std::string& name, int gradeSign, int gradeExec, const std::string& target);
        virtual ~AForm();

        const std::string& getName(void) const;
        const std::string& getTarget(void) const;
        bool getSigned(void) const;
        int getGradeSigned(void) const;
        int getGradeExec(void) const;

        void beSigned(Bureaucrat& bureaucrat);
        
        virtual void execute(const Bureaucrat& executor) const = 0;

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

        class isNotSignedException: public std::exception
        {
            public:
                isNotSignedException(const char* msg);
		        const char* what() const throw();
            private:
                const char* _error_msg;
        };

        class GradeTooLowToExcecuteException: public std::exception
        {
            public:
                GradeTooLowToExcecuteException(const char* msg);
		        const char* what() const throw();
            private:
                const char* _error_msg;
        };

    protected:
        void checkExecuteRequirements(const Bureaucrat &executor) const;

    private:
        const std::string   _name;
        const std::string   _target;
        bool                _signed;
        const int           _gradeSign;
        const int           _gradeExec;
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);

#endif