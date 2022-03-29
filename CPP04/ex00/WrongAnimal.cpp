/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/10 22:10:58 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** constructor
*/

WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	std::cout << CYAN << "Default constructor for WrongAnimal called" << RESET << std::endl;
}

/*
** copy-constructor
*/

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	*this = src;
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
}

/*
** an overload
*/

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &src )
{
	this->type = src.type;
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	return *this;
}

/*
** makeSound
*/

void	WrongAnimal::makeSound( void ) const
{
	std::cout << YELLOW << "Moo" << RESET << std::endl;
}

/*
** getType
*/

const std::string	&WrongAnimal::getType( void ) const
{
	return this->type;
}

/*
** destructor
*/

WrongAnimal::~WrongAnimal( void )
{
	std::cout << RED << "Destructor for WrongAnimal called" << RESET << std::endl;
}
