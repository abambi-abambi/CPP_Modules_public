/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 17:54:10 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void show_info(std::string name, Span &span)
{
	std::cout 
	<< name << ": "
	<< "shortestSpan: " << span.shortestSpan() << ", "
	<< "longestSpan: " << span.longestSpan() 
	<< std::endl;
}

int main(void)
{
	Span a = Span(5);
	a.addNumber(5);
	a.addNumber(3);
	a.addNumber(17);
	a.addNumber(9);
	a.addNumber(11);

	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;

	show_info("a", a);

	std::cout << std::endl << MAGENTA << "~~~ Copying ~~~" << RESET << std::endl;

	Span a_copy = a;
	show_info("a_copy", a_copy);

	std::cout << std::endl << MAGENTA "~~~ Set other ~~~" << RESET << std::endl;

	Span b = Span(10);
	for (int i = 0; i < 10; i++)
	{
		b.addNumber(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;
	show_info("b", b);

	std::cout << std::endl << MAGENTA << "~~~ Copying ~~~" << RESET << std::endl;

	Span b_copy = Span(b);
	show_info("b_copy", b);

	std::cout << std::endl << MAGENTA << "~~~  ~~~" << RESET << std::endl;

	Span c = Span(10);
	c.addNumber(0);
	// c.addNumber(0);
	c.addNumber(-1);
	show_info("c", c);

	std::cout << std::endl << MAGENTA "~~~ Exceptions ~~~" << RESET << std::endl;

	std::cout << CYAN << "#1" << RESET << std::endl;
	try
	{
		Span d = Span(1);
		d.addNumber(0);
		// std::cout << d.shortestSpan() << std::endl;
		// std::cout << d.longestSpan() << std::endl;
		// d.addNumber(100);

		// Span ee = Span(3);
		// std::cout << ee.shortestSpan() << std::endl;
		// std::cout << ee.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Span f = Span(10000);
		// for (int i = 0; i <= 9989; i++)
		// {
		// 	f.addNumber(i);
		// 	std::cout << i << " ";
		// }
		// f.addNumber(9990, 9999);
		std::cout << std::endl;
		try
		{
			std::cout << "min span: ";
			std::cout << f.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "max span: ";
			std::cout << f.longestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
