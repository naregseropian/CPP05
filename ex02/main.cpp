#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    std::cout << "Shrubbery Creation tests" << std::endl;
    
    try
    {
        Bureaucrat bureaucrat("Art", 2);
        std::cout << bureaucrat;
    }
    catch(const std::exception &e)
    {
        std::cout << "Failed to create form: " << e.what() << std::endl;
    }
}
