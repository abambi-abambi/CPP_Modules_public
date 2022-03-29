/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 21:18:51 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// ** Constructors ** //

RobotomyRequestForm::RobotomyRequestForm() : Form("UFO", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, 72, 45)
{

}

// ** Copy-constructor ** //

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{

}

// ** overload ** //

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	Form::operator=(src);
	return *this;
}

// ** execute ** //

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getExecuteGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	if (this->getWhetherSigned() == false)
		throw Form::FormNotSignedException();
	srand(time(0));
	if ((rand() % 2))
	{
		std::cout << std::endl << " Vrrr...Bzzz...Jjjj...Brrr... " << std::endl;
		std::cout << MAGENTA << "\"" << this->getName()
		<< "\"" << RESET << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << std::endl << "It's a failure" << std::endl;
}

// ** Destructor ** //

RobotomyRequestForm::~RobotomyRequestForm()
{

}
