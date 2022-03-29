/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 20:52:59 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ** Constructors ** //

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Unknown", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, 145, 137)
{

}

// ** Copy-constructor ** //

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{

}

// ** overload ** //

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	Form::operator=(src);
	return *this;
}

// ** execute ** //

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getExecuteGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	if (this->getWhetherSigned() == false)
		throw Form::FormNotSignedException();
	std::string const shrubName = (this->getName() + "_shrubbery");
	std::ofstream new_file(shrubName.c_str());
	if (!new_file.is_open() || new_file.bad())
	{
		std::cout << "Errors in file-opening" << std::endl;
		return ;
	}
	new_file << 
	"         /\\\n" \
	"        /\\*\\\n" \
	"       /\\O\\*\\\n" \
	"      /*/\\/\\/\\\n" \
	"     /\\O\\/\\*\\/\\\n" \
	"    /\\*\\/\\*\\/\\/\\\n" \
	"   /\\O\\/\\/*/\\/O/\\\n" \
	"        | |\n" \
	"        | |\n" \
	"        | |\n" << std::endl;
	new_file << 
	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n" << std::endl;
	new_file << 
	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n" << std::endl;
	new_file << std::endl;
	new_file.close();
}

// ** Destructor ** //

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}