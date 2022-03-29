/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 21:02:58 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{

std::cout << "~~~ Create Bureaucrats ~~~" << std::endl << std::endl;

	Bureaucrat a("One", 100);
	Bureaucrat b;
	Bureaucrat c("Three", 150);
	Bureaucrat d("Four", 1);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl << std::endl;

std::cout << "~~~ Create Forms ~~~" << std::endl << std::endl;

	Form *shrub = new ShrubberyCreationForm("Home");
	Form *pres = new PresidentialPardonForm("Nika");
	Form *robot = new RobotomyRequestForm("Pipe");
	// Form *f = new Form("form");
	// Form f1;
	std::cout << *shrub << std::endl;
	std::cout << *pres << std::endl;
	std::cout << *robot << std::endl << std::endl;

std::cout << "~~~ Actions with forms ~~~" << std::endl << std::endl;

	try
	{
		shrub->beSigned(a);
		std::cout << *shrub << std::endl << std::endl;
		shrub->beSigned(a);
		std::cout << *shrub << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		b.signForm(*pres);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

std::cout << std::endl << "~~~ Execute forms ~~~" << std::endl << std::endl;

// 1 //

	try
	{
		// pres->execute(d);
		d.executeForm(*pres);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	d.signForm(*pres);
	std::cout << std::endl;
	try
	{
		pres->execute(d);
		// pres->execute(d);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

// 2 //

	RobotomyRequestForm robot2 = RobotomyRequestForm("Blender");

	std::cout << robot2 << std::endl;
	try
	{
		robot2.beSigned(d);
		robot2.execute(d);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

// 3 //

	ShrubberyCreationForm shrub2 = ShrubberyCreationForm("Adam");

	try
	{
		d.signForm(shrub2);
		d.executeForm(shrub2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}
