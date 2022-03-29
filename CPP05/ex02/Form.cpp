/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 20:35:51 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ** constructors ** //

Form::Form():
	name("Dirty paper"), whetherSigned(false), signGrade(75), executeGrade(75)
{

}

Form::Form(std::string const name, int const signGrade, int const executeGrade):
	name(name), whetherSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

// ** copy-constructor ** //

Form::Form(Form const &src):
	name(src.name), whetherSigned(src.whetherSigned), \
	signGrade(src.signGrade), executeGrade(src.executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

// ** overload ** //

Form &Form::operator=(Form const &src)
{
	this->whetherSigned = src.whetherSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &form)//
{
	std::string	status;

	if (form.getWhetherSigned())
		status = \
"\033[32m\
signed\
\033[0m";
	else
		status = \
"\033[31m\
unsigned\
\033[0m";
	out << "Form " << MAGENTA << "\"" << form.getName() << "\"" << RESET \
<< " [is " << status << "]. " \
<< "Form options: " << YELLOW << "Sign grade: " << form.getSignGrade() \
<< "; Execution grade: " << form.getExecuteGrade() << RESET;
	return (out);
}

// ** getters ** //

std::string const Form::getName(void) const
{
	return this->name;
}

bool Form::getWhetherSigned(void) const
{
	return this->whetherSigned;
}

int Form::getSignGrade(void) const
{
	return this->signGrade;
}

int Form::getExecuteGrade(void) const
{
	return this->executeGrade;
}

/*
** beSigned
*/

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->signGrade < bureaucrat.getGrade())
	{
		std::cout << bureaucrat << " cannot sign " << MAGENTA << "\"" << this->getName()
		<< "\"" << RESET 
		<< " because " << RED << "Bureaucrat's sign grade is too low." << RESET << std::endl;
		throw Form::GradeTooLowException();
	}
	if (this->whetherSigned == true)
	{
		std::cout << bureaucrat << " cannot sign " << MAGENTA << "\"" << this->getName()
		<< "\"" << RESET 
		<< " because " << RED << "the form is already signed." << RESET << std::endl;
		throw Form::FormAlreadySignedException();
	}
	std::cout << bureaucrat 
	<< " signs " MAGENTA << "\"" << this->getName() << "\"" <<
	RESET << std::endl;
	this->whetherSigned = true;
}

// ** exceptions ** //

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade is too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade is too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already signed";
}

const char* Form::FormNotSignedException::what() const throw()
{
	return "FormException: The Form is not signed";
}

// ** destructor ** //

Form::~Form()
{

}
