/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/10 22:11:11 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** constructor
*/


WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << BLUE << "Default constructor for WrongCat called" << RESET << std::endl;
}

/*
** copy-constructor
*/

WrongCat::WrongCat( WrongCat const &src )
{
	*this = src;
	std::cout << "Copy constructor for WrongCat called" << std::endl;
}

/*
** an overload
*/

WrongCat	&WrongCat::operator=( WrongCat const &src )
{
	this->type = src.type;
	std::cout << "Assignement operator for WrongCat called" << std::endl;
	return *this;
}

/*
** makeSound
*/

void	WrongCat::makeSound( void ) const
{
	std::cout << YELLOW << "Ssssshhhhh" << RESET << std::endl;
}

/*
** destructor
*/

WrongCat::~WrongCat( void )
{
	std::cout << RED << "Destructor for WrongCat called" << RESET << std::endl;
}
