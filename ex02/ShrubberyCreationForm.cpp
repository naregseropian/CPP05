#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberryCreationForm::ShrubberryCreationForm(const std::string& target)
        : AForm("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberryCreationForm::~ShrubberryCreationForm()
{
}

void ShrubberryCreationForm::execute(const Bureaucrat& executor) const
{
    AForm::checkExecuteRequirements(executor);

}

        //              .o00o
        //            o000000oo
        //           00000000000o
        //          00000000000000
        //       oooooo  00000000  o88o
        //    ooOOOOOOOoo  ```''  888888
        //  OOOOOOOOOOOO'.qQQQQq. `8888'
        // oOOOOOOOOOO'.QQQQQQQQQQ/.88'
        // OOOOOOOOOO'.QQQQQQQQQQ/ /q
        //  OOOOOOOOO QQQQQQQQQQ/ /QQ
        //    OOOOOOOOO `QQQQQQ/ /QQ'
        //      OO:F_P:O `QQQ/  /Q'
        //         \\. \ |  // |
        //         d\ \\\|_////
        //         qP| \\ _' `|Ob
        //            \  / \  \Op
        //            |  | O| |
        //    _       /\. \_/ /\
        //     `---__/|_\\   //|  __
        //           `-'  `-'`-'-'