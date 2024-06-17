#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "ShrubberryCreationForm tests" << std::endl;
    
    try
    {
        Bureaucrat bureaucrat("Art", 136);
        std::cout << bureaucrat;
        ShrubberryCreationForm tree("Garden");
        bureaucrat.signForm(tree);
        bureaucrat.executeForm(tree);
        // tree.execute(bureaucrat);
    }
    catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl<< "RobotomyRequestForm tests" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Art", 44);
        std::cout << bureaucrat;
        RobotomyRequestForm droid("Mars");
        bureaucrat.signForm(droid);
        bureaucrat.executeForm(droid);
        // tree.execute(bureaucrat);
    }
    catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << std::endl<< "PresidentialPardonForm tests" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Art", 2);
        std::cout << bureaucrat;
        PresidentialPardonForm character("NPC");
        bureaucrat.signForm(character);
        bureaucrat.executeForm(character);
        // tree.execute(bureaucrat);
    }
    catch(const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}
