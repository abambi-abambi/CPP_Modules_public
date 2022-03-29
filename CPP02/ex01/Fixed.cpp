/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:14:24 by abambi            #+#    #+#             */
/*   Updated: 2021/11/08 17:25:28 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** several constructors
*/

Fixed::Fixed( void ):value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const data )
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (data << this->fractional_bits);
}

Fixed::Fixed( float const data )
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(data * (1 << this->fractional_bits));
}

/*
** the copy constructor
*/

Fixed::Fixed( const Fixed &data )
{
	std::cout << "Copy constructor called" << std::endl;
	// this->value = data.getRawBits();
	operator=(data);
}

/*
** the assignation operator overload
*/

Fixed &Fixed::operator=( const Fixed &data )
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = data.getRawBits();
	return *this;
}

/*
** one getter
*/

int Fixed::getRawBits( void ) const
{
	// std::cout << CYAN << "getRawBits member function called";
	// std::cout << RESET << std::endl;
	return this->value;
}

/*
** one setter
*/

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

/*
** an overload
*/

std::ostream &operator<<( std::ostream &out, Fixed const &value )
{
    out << value.toFloat();
    return out;
}

/*
** converters
*/

float Fixed::toFloat( void ) const
{
	float	result;

	result = (float)this->value / (float)(1 << this->fractional_bits);
	return result;
}

int Fixed::toInt( void ) const
{
	int	result;

	result = (int)this->value >> this->fractional_bits;
	return result;
}

/*
** the dectructor
*/

Fixed::~Fixed( void )
{
	std::cout << RED << "Destructor called";
	std::cout << RESET << std::endl;
}
