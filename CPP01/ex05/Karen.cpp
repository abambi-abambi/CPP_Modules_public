/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/06 17:40:38 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::complain( std::string level )
{
	int	i;

	void (Karen::*funcPtr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = -1;
	while (++i < 4)
	{
		while (level == levels[i])
		{
			(this->*funcPtr[i])();
			break ;
		}
	}
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon \
for my 7XL-double-cheese-triple-pickle-special-ketchup \
burger. I just love it!" << std::endl << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon \
cost more money. You don't put enough! \
If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon \
for free. I've been coming here for years \
and you just started working here last month." << std::endl << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, \
I want to speak to the manager now." << std::endl << std::endl;
}
