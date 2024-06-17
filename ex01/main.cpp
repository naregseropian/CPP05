#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
/*
    Try one
*/
    try
    {
        Bureaucrat bureaucrat("Art", 1);
        std::cout << bureaucrat;
        std::cout << std::endl;
        Form form("Registration", 4, 150);
        std::cout << "Pre-signing" << std::endl;
        std::cout << form;
        form.beSigned(bureaucrat);
        std::cout << std::endl;
        std::cout << "Post-signing" << std::endl;
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cout << "Failed to create form: " << e.what() << std::endl;
    }
/*
    Try two
*/
    try
    {
        std::cout << std::endl;
        Bureaucrat bureaucrat("Art", 5);
        std::cout << bureaucrat;
        std::cout << std::endl;
        Form form("Registration", 4, 150);
        std::cout << "Pre-signing" << std::endl;
        std::cout << form;
        form.beSigned(bureaucrat);
        std::cout << std::endl;
        std::cout << "Post-signing" << std::endl;
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cout << "Failed to create form: " << e.what() << std::endl;
    }
/*
    Try three
*/
    try
    {
        std::cout << std::endl;
        Bureaucrat bureaucrat("Art", 1);
        std::cout << bureaucrat;
        std::cout << std::endl;
        Form form("Registration", 4, 150);
        std::cout << "Pre-signing" << std::endl;
        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << std::endl;
        std::cout << "Post-signing" << std::endl;
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cout << "Failed to create form: " << e.what() << std::endl;
    }
}
