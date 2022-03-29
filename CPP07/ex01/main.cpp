/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/16 16:08:17 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	display(T &whatever)
{
	std::cout << GREEN << whatever << RESET << std::endl;
}

int	main(void)
{
	std::cout << "~~~ Array of chars ~~~" << std::endl;

	char a[3];

	a[0] = 'a';
	a[1] = 'm';
	a[2] = 'z';
	::iter(a, 3, &display);

	std::cout << "~~~ Array of strings ~~~" << std::endl;

	std::string	b[3];

	b[0] = "Hello";
	b[1] = " new ";
	b[2] = "world!";
	::iter(b, 3, &display);

	std::cout << "~~~ Array of ints ~~~" << std::endl;

	int	c[3];

	c[0] = 0;
	c[1] = 100;
	c[2] = 200;
	::iter(c, 3, &display);

	std::cout << "~~~ Array of floats ~~~" << std::endl;

	float	d[3];

	d[0] = 0.0f;
	d[1] = 100.1f;
	d[2] = 200.0f;
	::iter(d, 3, &display);

	return (0);
}

//CHECKLIST
// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(42) { return ;}
// 		int get(void) const {return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o; }

// template <typename T>
// void print_a(T const &x) {std::cout<<x<<std::endl;return;}

// int	main( void )
// {
// 	std::cout << "*** CHECKLIST ***" << std::endl;

// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];
// 	iter(tab, 5, print_a);
// 	iter(tab2, 5, print_a);

// 	return 0;
// }
