/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/05 22:48:33 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon):name(name), weapon(weapon)
{

}

void HumanA::attack( void )
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << this->weapon.getType();
	std::cout << std::endl;
}

HumanA::~HumanA( void )
{

}
