/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 12:33:59 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ** constructors ** //

Bureaucrat::Bureaucrat(): name("Anonimus"), grade(75) 
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade is too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade is too Low";
}

// ** overload ** //

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	this->grade = src.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &man)
{
	out << "Bureaucrat " << MAGENTA << "\"" << man.getName() \
<< "\"" << RESET << " [" << YELLOW << "Grade " << man.getGrade() << RESET \
<< "]";
	return (out);
}

// ** getters ** //

std::string const Bureaucrat::getName(void) const
{
	return this->name;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

// ** + and - ** //

void Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// ** destructor ** //

Bureaucrat::~Bureaucrat()
{

}
