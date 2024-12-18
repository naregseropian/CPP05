#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& rhs);
        ~Intern();

        AForm* makeForm(const std::string& name, const std::string& target);
};

#endif