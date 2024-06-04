#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberryCreationForm : public AForm
{
    public:
        ShrubberryCreationForm(const std::string& target);
        ~ShrubberryCreationForm();
        void execute(const Bureaucrat& executor) const;
};

#endif