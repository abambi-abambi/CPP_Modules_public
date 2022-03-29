/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/16 15:55:49 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}

// int	main( void )
// {
// 	float a = 4.2f;
// 	float b = 42.21f;

// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

// 	char c = 'a';
// 	char d = 'x';

// 	::swap(c, d);
// 	std::cout << "c = '" << c << "', d = '" << d << "'" << std::endl;
// 	std::cout << "min( c, d ) = '" << ::min( c, d ) << "'" << std::endl;
// 	std::cout << "max( c, d ) = '" << ::max( c, d ) << "'" << std::endl;

// 	return 0;
// }

//*** FROM CHECKLIST ***
// class Awesome
// {
// public:
// 	Awesome(void) : _n(0) {}
// 	Awesome(int n) : _n(n) {}
// 	Awesome &	operator=(Awesome &a) { _n = a._n; return *this; }
// 	bool		operator==(Awesome const &rhs) const {return (this->_n == rhs._n); }
// 	bool		operator!=(Awesome const &rhs) const {return (this->_n != rhs._n); }
// 	bool		operator>(Awesome const &rhs) const {return (this->_n > rhs._n); }
// 	bool		operator<(Awesome const &rhs) const {return (this->_n < rhs._n); }
// 	bool		operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n); }
// 	bool		operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n); }
// 	int get_n(void) const {return _n; }
// private:
// 	int _n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & a) { o << a.get_n(); return o; }

// int	main( void )
// {
// 	{
// 		std::cout << "*** CHECKLIST-TEST ***" << std::endl;
// 		Awesome a(2), b(4);
// 		std::cout << "a = " << a << ", b = " << b << " before swap" << std::endl;
// 		::swap(a, b);
// 		std::cout << "a = " << a << ", b = " << b << " after swap" << std::endl;
// 		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
// 		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
// 	}
// 	return 0;
// }