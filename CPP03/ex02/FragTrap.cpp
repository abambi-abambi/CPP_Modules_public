/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 18:36:46 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** constructors
*/

FragTrap::FragTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << BLUE << "::: New FragTrap \"" << "Unknown" << "\" appears!";
	std::cout << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << BLUE << "::: New FragTrap " << name << " appears!";
	std::cout << RESET << std::endl;
}

/*
** copy-constructor
*/

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << BLUE << "::: Another FragTrap \"" << src.name << "\" appears: " << RESET;
	std::cout << "FragTrap \"" << src.name << "\" is copied" << std::endl;
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
}

/*
** an overload
*/

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	// this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	std::cout << BLUE << ">>> FragTrap \"" << this->name << "\" took all characteristics \
from the FragTrap \"" << src.name << "\"" << RESET << std::endl;

	return *this;
}

/*
** attack
*/

void	FragTrap::attack(std::string const & target)
{
	if (hit_points)
	{
		hit_points--;
		if (hit_points < MIN_LEVEL)
			hit_points = MIN_LEVEL;
		std::cout << "FragTrap \"" << name << "\" ATTACKES " << RED << "-<<<)) ";
		std::cout << RESET << "\"" << target << "\", causing ";
		std::cout << attack_damage << " points of damage!\t--> ";
		std::cout << "\"" << name << "\": Level of hitpoints:.....";
		std::cout << hit_points << std::endl;
	}
	else
	{
		std::cout << "FragTrap \"" << name;
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

void	FragTrap::highFivesGuys( void )
{
	std::cout << YELLOW << "FragTrap \"" << this->name << "\": Hi, my friend, high five!!!";
	std::cout << RESET << std::endl;
}

/*
** destructor
*/

FragTrap::~FragTrap(void)
{
	std::cout << RED << "FragTrap \"" << name << "\" has disappeared!" << RESET << std::endl;
}
