/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/10 22:10:51 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** constructor
*/

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << GREEN << "Default constructor for Dog called" << RESET << std::endl;
}

/*
** copy-constructor
*/

Dog::Dog( Dog const &src )
{
	*this = src;
	std::cout << "Copy constructor for Dog called" << std::endl;
}

/*
** an overload
*/

Dog	&Dog::operator=( Dog const &src )
{
	this->type = src.type;
	std::cout << "Assignement operator for Dog called" << std::endl;
	return *this;
}

/*
** makeSound
*/

void	Dog::makeSound( void ) const
{
	std::cout << YELLOW << "Woof-woof-woof" << RESET << std::endl;
}

/*
** destructor
*/

Dog::~Dog( void )
{
	std::cout << RED << "Destructor for Dog called" << RESET << std::endl;
}
