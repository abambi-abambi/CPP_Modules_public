/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 20:48:03 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ** Constructors ** //

PresidentialPardonForm::PresidentialPardonForm() : Form("Nobody", 5, 25)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, 5, 25)
{

}

// ** Copy-constructor ** //

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{

}

// ** overload ** //

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	Form::operator=(src);
	return *this;
}

// ** execute ** //

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getExecuteGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	if (this->getWhetherSigned() == false)
		throw Form::FormNotSignedException();
	std::cout << MAGENTA << "\"" << this->getName() << "\"" << RESET << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

// ** Destructor ** //

PresidentialPardonForm::~PresidentialPardonForm()
{

}
