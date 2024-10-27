#include "Bureaucrat.hpp"
#include "Intern.hpp"

void internTest()
{
	Intern intern;
	// Art has the highest grade and can sign and execute any form
	Bureaucrat Art("Art", 1);

	const std::string formNames[] = {
		"shrubbery creation", "robotomy request", "presidential pardon", "not existing form"};
	const std::string target = "target";

	for (int i = 0; i < 4; ++i)
	{
		std::cout << "\nTest " << i + 1 << ": Form creation and execution test for '" << formNames[i]
				  << "':" << std::endl;

		AForm *form = intern.makeForm(formNames[i], target);
		if (form)
		{
			std::cout << *form << std::endl;

			Art.signForm(*form);
			Art.executeForm(*form);

			delete form;
		}
	}
}

int main()
{
	internTest();
	return 0;
}