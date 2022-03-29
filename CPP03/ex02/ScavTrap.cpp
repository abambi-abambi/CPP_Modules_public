/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 18:36:03 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** constructors
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << MAGENTA << "::: New ScavTrap \"" << "Unknown" << "\" appears!";
	std::cout << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << MAGENTA << "::: New ScavTrap " << name << " appears!";
	std::cout << RESET << std::endl;
}

/*
** copy-constructor
*/

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << MAGENTA << "::: Another ScavTrap \"" << src.name << "\" appears: " << RESET;
	std::cout << "ScavTrap \"" << src.name << "\" is copied" << std::endl;
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
}

/*
** an overload
*/

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	// this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	std::cout << MAGENTA << ">>> ScavTrap \"" << this->name << "\" took all characteristics \
from the ScavTrap \"" << src.name << "\"" << RESET << std::endl;

	return *this;
}

/*
** attack
*/

void	ScavTrap::attack(std::string const & target)
{
	if (hit_points)
	{
		hit_points--;
		if (hit_points < MIN_LEVEL)
			hit_points = MIN_LEVEL;
		std::cout << "ScavTrap \"" << name << "\" ATTACKES " << RED << "~~~~>> ";
		std::cout << RESET << "\"" << target << "\", causing ";
		std::cout << attack_damage << " points of damage!\t--> ";
		std::cout << "\"" << name << "\": Level of hitpoints:.....";
		std::cout << hit_points << std::endl;
	}
	else
	{
		std::cout << "ScavTrap \"" << name;
		std::cout << "\"" << RED << " cannot ATTACK!" << RESET;
		std::cout << "\t\t\t\t\t--> \"" << name << "\": Level of hitpoints:.....";
		std::cout << RED << hit_points << RESET << std::endl;	
	}
}

/*
** takeDamage: inherited from ClapTrap
*/

/*
** beRepaired: inherited from ClapTrap
*/

/*
** guardGate
*/

void	ScavTrap::guardGate( void )
{
	std::cout << YELLOW << "ScavTrap \"" << this->name << "\" has enterred in Gate keeper mode";
	std::cout << RESET << std::endl;
}

/*
** destructor
*/

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << "ScavTrap \"" << name << "\" has disappeared!" << RESET << std::endl;
}
