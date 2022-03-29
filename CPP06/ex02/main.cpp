/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/14 21:02:04 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "General.hpp"

Base * generate(void)
{
	int rest;
	
	rest = rand() % 3;
	if (rest == 0)
	{
		std::cout << "New A";
		return (new A);
	}
	else if (rest == 1)
	{
		std::cout << "New B";
		return (new B);
	}
	else
	{
		std::cout << "New C";
		return (new C);
	}
}

// ~~~ from pointer ~~~

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C";
}

// ~~~ from reference ~~~

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A";
		(void)a;
		return ;
	}
	catch(std::exception & e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B";
		(void)b;
		return ;
	}
	catch(std::exception & e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C";
		(void)c;
		return ;
	}
	catch(std::exception & e)
	{
	}	
}

int main(void)
{
	Base *sample;
	int	i;

	i = 0;
	srand(time(NULL));
	while (++i <= 10)
	{
		sample = generate();
		std::cout << MAGENTA << " # " << i << ": " << RESET 
		<< CYAN << "Identify:" << RESET << " *p: " << MAGENTA;
		identify(sample);
		std::cout << RESET << " &ref: " << MAGENTA;
		identify(*sample);
		std::cout << RESET << std::endl;
		delete sample;
	}
	return (0);
}
