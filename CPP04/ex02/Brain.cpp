/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/11 11:20:59 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** constructor
*/

Brain::Brain( void )
{
	std::cout << CYAN << "Default constructor for Brain called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Hello World!";
}

/*
** copy-constructor
*/

Brain::Brain( Brain const &src )
{
	*this = src;
	std::cout << "Copy constructor for Brain called" << std::endl;
}

/*
** an overload
*/

Brain &	Brain::operator=( Brain const &src )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Assignement operator for Brain called" << std::endl;
	return *this;
}

/*
** destructor
*/

Brain::~Brain( void )
{
	std::cout << YELLOW << "Destructor for Brain called" << RESET << std::endl;
}
