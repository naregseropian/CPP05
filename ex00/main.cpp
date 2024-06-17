#include "Bureaucrat.hpp"

int main()
{
    std::cout << "First try" << std::endl;
    try
    {
        std::cout << "First Bureaucrat:" << std::endl;
        Bureaucrat one("Art", 1);
        std::cout << one << std::endl;
        std::cout << "Second Bureaucrat:" << std::endl;
        Bureaucrat two("Bart", 150);
        std::cout << two << std::endl;
        std::cout << "Thrird Bureaucrat:" << std::endl;
        Bureaucrat three("Charlie", 0);
        std::cout << three << std::endl;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "exception caught! " << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "exception caught! " << e.what() << std::endl;
    }

    std::cout << std::endl;
/*
=====================================================================
 */
    std::cout << "Second try" << std::endl;
    try
    {
        std::cout << "First Bureaucrat:" << std::endl;
        Bureaucrat one("Art", 2);
        std::cout << one << std::endl;

        std::cout << "Second Bureaucrat:" << std::endl;
        Bureaucrat two("Barbie", 152);
        std::cout << two << std::endl;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "exception caught! " << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "exception caught! " << e.what() << std::endl;
    }

    std::cout << std::endl;
/*
=====================================================================
*/
    std::cout << "Third try" << std::endl;
    try
    {
        std::cout << "First Bureaucrat:" << std::endl;
        Bureaucrat one("Bert", 1);
        std::cout << one;
        one.Decrement();
        one.Decrement();
        std::cout << one;
        one.Increment();
        one.Increment();
        one.Increment();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "exception caught! " << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "exception caught! " << e.what() << std::endl;
    }
}
