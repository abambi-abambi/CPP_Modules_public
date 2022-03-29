/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/10 22:10:43 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** constructor
*/

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << GREEN << "Default constructor for Cat called" << RESET << std::endl;
}

/*
** copy-constructor
*/

Cat::Cat( Cat const &src )
{
	*this = src;
	std::cout << "Copy constructor for Cat called" << std::endl;
}

/*
** an overload
*/

Cat	&Cat::operator=( Cat const &src )
{
	this->type = src.type;
	std::cout << "Assignement operator for Cat called" << std::endl;
	return *this;
}

/*
** makeSound
*/

void	Cat::makeSound( void ) const
{
	std::cout << YELLOW << "Meow-meow-meow" << RESET << std::endl;
}

/*
** destructor
*/

Cat::~Cat( void )
{
	std::cout << RED << "Destructor for Cat called" << RESET << std::endl;
}
