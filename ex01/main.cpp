#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Art", 2);
        std::cout << bureaucrat;
        Form form("Form 28", 4, 150);
        std::cout << form;
        form.beSigned(bureaucrat);
        std::cout << form;
    }
    catch(const std::exception &e)
    {
        std::cout << "Failed to create form: " << e.what() << std::endl;
    }
}
