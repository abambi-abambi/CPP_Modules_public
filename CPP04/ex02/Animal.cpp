/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/10 22:16:16 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** constructor
*/

Animal::Animal( void )
{	
	this->type = "Animal";
	std::cout << "Default constructor for Animal called" << std::endl;
}

/*
** copy-constructor
*/

Animal::Animal( Animal const &src )
{
	*this = src;
	std::cout << "Copy constructor for Animal called" << std::endl;
}

/*
** an overload
*/

Animal	&Animal::operator=( Animal const &src )
{
	this->type = src.type;
	std::cout << "Assignement operator for Animal called" << std::endl;
	return *this;
}

/*
** makeSound
*/

void	Animal::makeSound( void ) const
{
	std::cout << "Zzz-zzz-zzz" << std::endl;
}

/*
** getType
*/

const std::string	&Animal::getType( void ) const
{
	return this->type;
}

/*
** destructor
*/

Animal::~Animal( void )
{
	std::cout << RED << "Destructor for Animal called" << RESET << std::endl;
}
