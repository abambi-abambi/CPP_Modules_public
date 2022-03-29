/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/05 22:49:25 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	this->type = "";
}

Weapon::Weapon(std::string const &type):type(type)
{

}

void	Weapon::setType( std::string const &type )
{
	this->type = type;
}

std::string const &Weapon::getType( void ) const
{
	return Weapon::type;
}

Weapon::~Weapon( void )
{

}
