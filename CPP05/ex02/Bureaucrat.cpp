/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 21:00:58 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ** constructors ** //

Bureaucrat::Bureaucrat(): name("Anonym"), grade(75) 
{

}

Bureaucrat::Bureaucrat(std::string const name, int grade):
	name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// ** copy-constructor ** //

Bureaucrat::Bureaucrat(Bureaucrat const &src):
	name(src.name), grade(src.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// ** exceptions ** //

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade is too High";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade is too Low";
}

// ** overload ** //

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	this->grade = src.grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &man)
{
	out << "Bureaucrat " << MAGENTA << "\"" << man.getName() \
<< "\"" << RESET << " [" << YELLOW << "Grade: " << man.getGrade() << RESET << "]";
	return (out);
}


// ** getters ** //

std::string const	Bureaucrat::getName(void) const
{
	return this->name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}

// ** + and - ** //

void	Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// ** signForm ** //

void	Bureaucrat::signForm(Form &form) const
{
	form.beSigned(*this);
}

// ** ** //

void	Bureaucrat::executeForm(Form const & form)
{
	if (form.getWhetherSigned() == false)
	{
		std::cout << RED << "Error: " << RESET << *this 
		<< " cannot execute " << form << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
		form.execute(*this);
	} 
}

// ** destructor ** //

Bureaucrat::~Bureaucrat()
{

}
