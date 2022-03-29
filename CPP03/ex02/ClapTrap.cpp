/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 18:02:24 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** constructors
*/

ClapTrap::ClapTrap(void)
{
	name = "Unknown";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << GREEN << "::: New ClapTrap \"" << name << "\" appears!";
	std::cout << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << GREEN << "::: New ClapTrap \"" << name << "\" appears!";
	std::cout << RESET << std::endl;
}

/*
** copy-constructor
*/

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << GREEN << "::: Another ClapTrap \"" << src.name << "\" appears: " << RESET;
	std::cout << "ClapTrap \"" << src.name << "\" is copied" << std::endl;
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
}

/*
** an overload
*/

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	// this->name = src.name; //not for today
	this->hit_points = src.hit_points;
	this->energy_points = src.energy_points;
	this->attack_damage = src.attack_damage;
	std::cout << ">>> ClapTrap \"" << this->name << "\" took all characteristics \
from the ClapTrap \"" << src.name << "\"" << std::endl;

	return *this;
}

/*
** attack
*/

void	ClapTrap::attack(std::string const & target)
{
	if (hit_points)
	{
		hit_points--;
		if (hit_points < MIN_LEVEL)
			hit_points = MIN_LEVEL;
		std::cout << "ClapTrap \"" << name << "\" ATTACKES " << RED << "::->-> ";
		std::cout << RESET << "\"" << target << "\", causing ";
		std::cout << attack_damage << " points of damage!\t--> ";
		std::cout << "\"" << name << "\": Level of hitpoints:.....";
		std::cout << hit_points << std::endl;
	}
	else
	{
		std::cout << "\"" << name;
		std::cout << "\"" << RED << " cannot ATTACK!" << RESET;
		std::cout << "\t\t\t\t\t--> \"" << name << "\": Level of hitpoints:.....";
		std::cout << RED << hit_points << RESET << std::endl;	
	}
}

/*
** takeDamage
*/

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_points == MIN_LEVEL)
		return ;
	if (amount >= this->hit_points)
		this->hit_points = MIN_LEVEL;
	else
		this->hit_points -= amount;
	if (amount >= this->energy_points)
		this->energy_points = MIN_LEVEL;
	else	
		this->energy_points -= amount;
	if (this->hit_points < MIN_LEVEL)
		this->hit_points = MIN_LEVEL;
	if (this->energy_points < MIN_LEVEL)
		this->energy_points = MIN_LEVEL;
	std::cout << "\\\\// \"" << name << "\"" << RED << " is damaged. ";
	std::cout << RESET << "\t\t\t\t\t--> Hit points level: ";
	if (this->hit_points == MIN_LEVEL)
		std::cout << RED << this->hit_points << RESET;
	else
		std::cout << this->hit_points;
	std::cout << " ::: Energy points level: ";
	if (this->energy_points == MIN_LEVEL)
		std::cout << RED << this->energy_points << RESET;
	else
		std::cout << this->energy_points;
	std::cout << std::endl;
}

/*
** beRepaired
*/

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == MAX_LEVEL && this->energy_points == MAX_LEVEL)
		return ;
	if ((this->hit_points + amount) >= MAX_LEVEL)
		this->hit_points = MAX_LEVEL;
	else
		this->hit_points += amount;
	if ((this->energy_points + amount ) > MAX_LEVEL)
		this->energy_points = MAX_LEVEL;
	else
		this->energy_points += amount;
	std::cout << "+++ \"" << name << "\"" << CYAN << " is repaired " << RESET;
	std::cout << RESET << "\t\t\t\t\t--> Hit points level: " << this->hit_points;
	std::cout << " ::: Energy points level: " << this->energy_points << std::endl;
}

/*
** destructor
*/

ClapTrap::~ClapTrap(void)
{
	std::cout << RED << "ClapTrap \"" << name << "\" has disappeared!" << RESET << std::endl;
}
