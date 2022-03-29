/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:23:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/08 17:20:01 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		Fixed( const Fixed &data );
		Fixed &operator= ( const Fixed &data );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();
};

#endif
