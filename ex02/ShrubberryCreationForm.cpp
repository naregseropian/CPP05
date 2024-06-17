#include "ShrubberryCreationForm.hpp"
#include <fstream>
#include <unistd.h>

ShrubberryCreationForm::ShrubberryCreationForm(const std::string& target)
        : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberryCreationForm::ShrubberryCreationForm(const ShrubberryCreationForm &other) 
    : AForm(other.getName(), other.getGradeSigned(), other.getGradeExec()), _target(other.getTarget())
{
    *this = other;
}

ShrubberryCreationForm& ShrubberryCreationForm::operator=(const ShrubberryCreationForm &rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
        this->_asciiTree = rhs._asciiTree;
    }
    return (*this);
}

ShrubberryCreationForm::~ShrubberryCreationForm()
{
}

const std::string& ShrubberryCreationForm::getTarget(void) const
{
    return _target;
}

void ShrubberryCreationForm::execute(const Bureaucrat& executor) const
{
    AForm::checkExecuteRequirements(executor);
    
    std::ofstream outFile;
    std::string fileName = (_target + "_shrubberry");
    outFile.open(fileName.c_str());
    outFile << _asciiTree;
    outFile.close();
}

std::string ShrubberryCreationForm::_asciiTree =
        "			'.,				\n"
        "			'b      *		\n"
        "			'$    #.		\n"
        "			$:   #:			\n"
        "			*#  (@):		\n"
        "			:@,(@):   ,.**:'\n"
        " ,			:@@*: 	..**'	\n"
        "	'#o..	.:(@)'	.@*'	\n"
        "		'bq,8..:,@@*'	,*	\n"
        "			,$q,:(@)'.p*'	\n"
        "			'@@Pp*'			\n"
        "			Y7'.'			\n"
        "			:(@):.			\n"
        "			..@@:'.			\n"
        "			..:@(@):.      	\n";