/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/05 22:54:35 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon \
for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!" << std::endl << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon \
cost more money. You don't put enough! \
If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon \
for free. I've been coming here for years and you \
just started working here last month." << std::endl << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, \
I want to speak to the manager now." << std::endl << std::endl;
}

int comparison(std::string level)
{
	int	i;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = -1;
	while (++i < 4)
	{
		while (level == levels[i])
			return (i);
	}
	return (5);
}

void Karen::complain( std::string level )
{
	int	result;

	result = comparison(level);
	switch (result)
	{
		case 0:
			Karen::debug();
		case 1:
			Karen::info();
		case 2:
			Karen::warning();
		case 3:
			Karen::error();
		break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}
