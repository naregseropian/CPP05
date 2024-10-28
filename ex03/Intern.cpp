#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
}

AForm *createShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberryCreationForm(target));
}

AForm *createRobotomyRequestForm(const std::string &target)
{
	AForm *formPtr = new RobotomyRequestForm(target);
	return formPtr;
}

AForm *createPresidentialPardonForm(const std::string &target)
{
	PresidentialPardonForm *presidentialFormPtr = new PresidentialPardonForm(target);
	// AForm *genericAFormPtr = static_cast<AForm *>(presidentialFormPtr);
	// return genericAFormPtr;
	return presidentialFormPtr;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{

	struct FormCreationArrayElement
	{
		std::string name;
		AForm *(*createFunc)(const std::string &);
	};

	FormCreationArrayElement shrubberyEntry = {"shrubbery creation", &createShrubberyCreationForm};
	FormCreationArrayElement robotomyEntry = {"robotomy request", &createRobotomyRequestForm};
	FormCreationArrayElement presidentialEntry = {"presidential pardon", &createPresidentialPardonForm};

	FormCreationArrayElement formCreationArray[4] = {shrubberyEntry, robotomyEntry, presidentialEntry, {"", NULL}};

	for (int i = 0; formCreationArray[i].createFunc != NULL; i++)
	{
		if (formName == formCreationArray[i].name)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return formCreationArray[i].createFunc(target);
		}
	}
	std::cout << "The form '" << formName << "' doesn't exist. Intern didn't create it." << std::endl;
	return NULL;
}