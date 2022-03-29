/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:14:24 by abambi            #+#    #+#             */
/*   Updated: 2021/11/08 17:39:19 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** several constructors
*/

Fixed::Fixed( void ):value(0)
{

}

Fixed::Fixed(int const data)
{
	this->value = (data << this->fractional_bits);
}

Fixed::Fixed(float const data)
{
	this->value = roundf(data * (1 << this->fractional_bits));
}

/*
** the copy constructor
*/

Fixed::Fixed( const Fixed &data )
{
	this->value = data.getRawBits();
}

/*
** the assignation operator overload
*/

Fixed &Fixed::operator=( const Fixed &data )
{
	this->value = data.getRawBits();
	return (*this);
}

/*
** Bools
*/

bool Fixed::operator>( const Fixed &data ) const
{
	return (this->getRawBits() > data.getRawBits());
}

bool Fixed::operator<( const Fixed &data ) const
{
	return (this->getRawBits() < data.getRawBits());
}

bool Fixed::operator>=( const Fixed &data ) const
{
	return (this->getRawBits() >= data.getRawBits());
}

bool Fixed::operator<=( const Fixed &data ) const
{
	return (this->getRawBits() <= data.getRawBits());
}

bool Fixed::operator==( const Fixed &data ) const
{
	return (this->getRawBits() == data.getRawBits());
}

bool Fixed::operator!=( const Fixed &data ) const
{
	return (this->getRawBits() != data.getRawBits());
}

/*
** Arithmetics
*/

Fixed Fixed::operator+( const Fixed &data )
{
	Fixed	temp;

	temp.value = this->value + data.value;
	return (temp);
}

Fixed Fixed::operator-( const Fixed &data )
{
	Fixed	temp(*this);

	temp.setRawBits(this->getRawBits() - data.getRawBits());
	return (temp);
}

Fixed Fixed::operator*( const Fixed &data )
{
	Fixed	val(*this);

	val.setRawBits(((long)this->getRawBits() * (long)data.getRawBits()) / \
					(1 << this->fractional_bits));
	return (val);
}

Fixed Fixed::operator/( const Fixed &data )
{
	Fixed	val(*this);
	long	temp1;
	long	temp2;

	temp1 = ((long)this->getRawBits());
	temp2 = ((long)data.getRawBits());
	val.value = (temp1 * (1 << this->fractional_bits)) / temp2;
	return (val);
}

/*
** Pre-
*/

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

/*
** Post-
*/

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value += 1;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

/*
** an overload
*/

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return out;
}

/*
** one getter
*/

int Fixed::getRawBits(void) const
{
	return this->value;
}

/*
** one setter
*/

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
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
** Find min
*/

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/*
** Find max
*/

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/*
** the dectructor
*/

Fixed::~Fixed( void )
{
	// std::cout << RED << "Destructor called";
	// std::cout << RESET << std::endl;
}
