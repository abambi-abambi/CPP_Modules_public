/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:10:08 by abambi            #+#    #+#             */
/*   Updated: 2021/11/08 17:46:28 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

#define RESET   "\033[0m"
#define CYAN    "\033[36m"      /* Cyan */
#define RED     "\033[31m"      /* Red */

class Fixed
{
private:
	int					value;
	static const int	fractional_bits = 8;
public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed( const Fixed &data );
	Fixed &operator=( const Fixed &data );
	int getRawBits(void) const;
	void setRawBits(int const raw);
	bool operator>( const Fixed &data ) const;
	bool operator<( const Fixed &data ) const;
	bool operator>=( const Fixed &data ) const;
	bool operator<=( const Fixed &data ) const;
	bool operator==( const Fixed &data ) const;
	bool operator!=( const Fixed &data ) const;
	Fixed operator+( const Fixed &data );
	Fixed operator-( const Fixed &data );
	Fixed operator*( const Fixed &data );
	Fixed operator/( const Fixed &data );
	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();
	static Fixed const &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
Fixed const &min(const Fixed &a, const Fixed &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed const &max(const Fixed &a, const Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif
