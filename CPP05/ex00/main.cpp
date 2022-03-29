/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 13:01:39 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	// *** new Bureaucrats *** //
	std::cout << std::endl \
	<< "~~~ new Bureaucrats ~~~" << std::endl << std::endl;


	Bureaucrat a("One", 100);
	Bureaucrat b("Two", 1);
	Bureaucrat c("Three", 150);
	Bureaucrat d;

	// *** check grades *** //

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	// *** new Bureaucrat with too high level *** //

	std::cout << std::endl;

	try
	{
		Bureaucrat i("Four", 0);
		std::cout << i << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	// *** new Bureaucrat with too low level *** //

	try
	{
		Bureaucrat j("Five", 151);
		std::cout << j << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	// *** increments/decrements *** //

	std::cout << std::endl \
	<< "~~~ Increments/Decrements ~~~" << std::endl << std::endl;

// 1 //
	a.incrementGrade();
	std::cout << a << std::endl;
	a.incrementGrade();
	std::cout << a << std::endl << std::endl;

// 2 //
	std::cout << c << std::endl;
	try
	{
		c.decrementGrade();
		std::cout << c << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

// 3 //
	std::cout << std::endl << std::endl;

	b.decrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl << std::endl;
	try
	{
		b.incrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
