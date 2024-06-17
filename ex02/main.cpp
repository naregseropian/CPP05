#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
    // std::cout << "Shrubbery Creation tests" << std::endl;
    
    // try
    // {
    //     Bureaucrat bureaucrat("Art", 136);
    //     std::cout << bureaucrat;
    //     ShrubberryCreationForm tree("Garden");
    //     bureaucrat.signForm(tree);
    //     bureaucrat.executeForm(tree);
    //     // tree.execute(bureaucrat);
    // }
    // catch(const std::exception &e)
    // {
    //     std::cout << "Error: " << e.what() << std::endl;
    // }
    std::cout << "RobotomyRequestForm tests" << std::endl;
    
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
}
