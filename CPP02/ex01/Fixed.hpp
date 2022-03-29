/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:04:08 by abambi            #+#    #+#             */
/*   Updated: 2021/11/08 00:45:51 by abambi           ###   ########.fr       */
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
		Fixed( void );
		Fixed( int const data );
		Fixed( float const data );
		Fixed( const Fixed &data );
		Fixed &operator= ( const Fixed &data );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		~Fixed( void );
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
