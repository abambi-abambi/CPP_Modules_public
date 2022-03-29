/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/08 17:24:03 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ):value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &data )
{
	std::cout << "Copy constructor called" << std::endl;
	// this->value = data.getRawBits();
	operator=(data);
}

Fixed &Fixed::operator= ( const Fixed &data )
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = data.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << CYAN << "getRawBits member function called";
	std::cout << RESET << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/*
** the dectructor
*/

Fixed::~Fixed( void )
{
	std::cout << RED << "Destructor called";
	std::cout << RESET << std::endl;
}
