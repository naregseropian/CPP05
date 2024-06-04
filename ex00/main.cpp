#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "First Bureaucrat: Art, 1" << std::endl;
        Bureaucrat one("Art", 1);
        std::cout << "Second Bureaucrat: Bart, 150" << std::endl;
        Bureaucrat two("Bart", 150);   
        std::cout << "Thrird Bureaucrat: Charlie, 0" << std::endl;
        Bureaucrat three("Charlie", 0);
        std::cout << "Fourth Bureaucrat: Barbie, 152" << std::endl;
        Bureaucrat four("Barbie", 152);
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "exception caught: " << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "exception caught: " << e.what() << std::endl;
    }
    
    try
    {
        std::cout << "First Bureaucrat: Art, 2" << std::endl;
        Bureaucrat one("Art", 2);
        one.Increment();
        one.Increment();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "exception caught: " << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "exception caught: " << e.what() << std::endl;
    }
}
