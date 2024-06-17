#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberryCreationForm : public AForm
{
    public:
        ShrubberryCreationForm(const std::string& target);
		ShrubberryCreationForm(const ShrubberryCreationForm &obj);
        ShrubberryCreationForm &operator=(const ShrubberryCreationForm &rhs);
        ~ShrubberryCreationForm();

        const std::string& getTarget(void) const;

        void execute(const Bureaucrat& executor) const;

    private:
        std::string         _target;
        static std::string 	_asciiTree;
};

#endif