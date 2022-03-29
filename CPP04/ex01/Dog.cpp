/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/11 11:29:56 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** constructor
*/

Dog::Dog( void )
{
	std::cout << GREEN << "Default constructor for Dog called" << RESET << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
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
	this->brain = new Brain(*src.brain);
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
** getBrain
*/

Brain	*Dog::getBrain( void ) const
{
	std::cout << "Brain address is: " << this->brain << std::endl;
	return this->brain;
}

/*
** destructor
*/

Dog::~Dog( void )
{
	if (this->brain)
		delete this->brain;
	std::cout << RED << "Destructor for Dog called" << RESET << std::endl;
}
