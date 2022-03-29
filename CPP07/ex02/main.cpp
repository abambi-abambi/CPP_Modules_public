/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/16 16:13:35 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<char>			a;
	Array<char>			b(3);
	Array<std::string>	c;
	Array<std::string>	d(3);
	Array<int>			e;
	Array<int>			f(3);
	Array<float>		g;
	Array<float>		h(3);

	std::cout << std::endl << MAGENTA << "~~~ Sizes ~~~" << RESET << std::endl;
	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;
	std::cout << c.size() << std::endl;
	std::cout << d.size() << std::endl;
	std::cout << e.size() << std::endl;
	std::cout << f.size() << std::endl;
	std::cout << g.size() << std::endl;
	std::cout << h.size() << std::endl;

	std::cout << MAGENTA << "~~~ Array of chars ~~~" << RESET << std::endl;

	b[0] = 'a';
	b[1] = 'm';
	b[2] = 'z';

	for (unsigned int i = 0; i < b.size(); i++)
	{
		std::cout << b[i] << std::endl;
	}

	std::cout << MAGENTA << "~~~ Array of strings ~~~" << RESET << std::endl;

	d[0] = "Hello";
	d[1] = " new ";
	d[2] = "world!";

	for (unsigned int i = 0; i < d.size(); i++)
	{
		std::cout << d[i] << std::endl;
	}

	std::cout << MAGENTA << "~~~ Array of ints ~~~" << RESET << std::endl;

	f[0] = 0;
	f[1] = 100;
	f[2] = 200;

	for (unsigned int i = 0; i < f.size(); i++)
	{
		std::cout << f[i] << std::endl;
	}

	std::cout << MAGENTA << "~~~ Array of floats ~~~" << RESET << std::endl;

	h[0] = 0.0f;
	h[1] = 100.1f;
	h[2] = 200.0f;

	for (unsigned int i = 0; i < h.size(); i++)
	{
		std::cout << h[i] << std::endl;
	}

	std::cout << std::endl << MAGENTA << "~~~ Tests ~~~" << RESET << std::endl;

	std::cout << std::endl << CYAN << "# 1" << RESET << std::endl;

	d[0] = "See you again";
	for (unsigned int i = 0; i < d.size(); i++)
	{
		std::cout << d[i] << std::endl;
	}

	std::cout << std::endl << CYAN << "# 2" << RESET << std::endl;

	c = c;
	Array<std::string> c_dupl = c;
	Array<std::string> d_dupl = d;

	std::cout << std::endl;
	for (unsigned int i = 0; i < d.size(); i++)
	{
		std::cout << d_dupl[i] << std::endl;
	}

	std::cout << std::endl << CYAN << "# 3" << RESET << std::endl;

	try
	{
		std::cout << b[3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << CYAN << "# 4" << RESET << std::endl;

	try
	{
		std::cout << h[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << MAGENTA << "~~~ END ~~~" << RESET << std::endl;

	// int *z = new int[0];
	// delete[] z;

	// Array<std::complex<double> > x(1);
	// std::cout << x.size() << std::endl;
	// std::cout << x[0] << std::endl;

	return 0;
}
