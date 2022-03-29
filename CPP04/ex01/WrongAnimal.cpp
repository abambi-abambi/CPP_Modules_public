/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/10 22:19:59 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** constructor
*/

WrongAnimal::WrongAnimal( void )
{
	this->type = "WronAnimal";
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
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

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &src )
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
	std::cout << "SSSSSShhhhhhhh" << std::endl;
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
	std::cout << "Destructor for WrongAnimal called" << std::endl;
}
