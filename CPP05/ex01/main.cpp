/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 15:00:25 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

	Form f1("Taxes", 100, 50);
	Form f2;
	Form f3("Car", 99, 50);
	Form f4("Papirus", 101, 50);

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;
	std::cout << f4 << std::endl;

// ** Wrong forms ** //
// 1 //

	std::cout << std::endl;
	try
	{
		Form f5("Invalid Form", 151, 75);
		std::cout << f5 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

// 2 //
	std::cout << std::endl;
	try
	{
		Form f6("Invalid Form", 0, 75);
		std::cout << f6 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

// 3 //

	std::cout << std::endl;
	try
	{
		Form f7("Invalid Form", 75, 151);
		std::cout << f7 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

// 4 //

	std::cout << std::endl;
	try
	{
		Form f8("Invalid Form", 75, 0);
		std::cout << f8 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "~~~ beSigned() ~~~" << std::endl << std::endl;

	std::cout << "# 1" << std::endl;
	std::cout << f1 << std::endl;
	f1.beSigned(a);
	std::cout << f1 << std::endl;

	std::cout << std::endl << "# 2" << std::endl;
	std::cout << f2 << std::endl;
	try
	{
		f2.beSigned(d);
		std::cout << f2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "# 3" << std::endl;
	std::cout << f3 << std::endl;
	try
	{
		f3.beSigned(c);
		std::cout << f3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "# 4" << std::endl;
	std::cout << f3 << std::endl;
	try
	{
		f3.beSigned(d);
		std::cout << f3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

std::cout << std::endl << "~~~ signForm() ~~~" << std::endl << std::endl;

	std::cout << "# 1" << std::endl;
	try
	{
		c.signForm(f4);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << f4 << std::endl << std::endl;

	std::cout << "# 2" << std::endl;
	try
	{
		a.signForm(f4);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << f4 << std::endl << std::endl;

	return (0);
}
