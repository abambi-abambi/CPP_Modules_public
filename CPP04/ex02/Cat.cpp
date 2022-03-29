/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/11 11:29:14 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** constructor
*/

Cat::Cat( void )
{
	std::cout << GREEN << "Default constructor for Cat called" << RESET << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

/*
** copy-constructor
*/

Cat::Cat( Cat const &src )
{
	*this = src;
	std::cout << "Copy constructor for Cat called" << std::endl;
}

/*
** an overload
*/

Cat	&Cat::operator=( Cat const &src )
{
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	std::cout << "Assignement operator for Cat called" << std::endl;
	return *this;
}

/*
** makeSound
*/

void	Cat::makeSound( void ) const
{
	std::cout << YELLOW << "Meow-meow-meow" << RESET << std::endl;
}

/*
** getBrain
*/

Brain	*Cat::getBrain( void ) const
{
	std::cout << "Brain address is: " << this->brain << std::endl;
	return this->brain;
}

/*
** destructor
*/

Cat::~Cat( void )
{
	if (this->brain)
		delete this->brain;
	std::cout << RED << "Destructor for Cat called" << RESET << std::endl;
}
