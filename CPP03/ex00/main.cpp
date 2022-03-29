/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 15:17:08 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	zombie_game(void)
{
	ClapTrap	a;
	ClapTrap	b("Zombie");
	ClapTrap	c("Ghoast");
	ClapTrap	d( b );

	std::cout << std::endl;

	a = c;

	std::cout << std::endl;
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	a.attack("tree");
	std::cout << std::endl;
	a.takeDamage(3);
	b.takeDamage(3);
	c.takeDamage(3);
	c.takeDamage(3);
	c.takeDamage(3);
	c.takeDamage(3);
	c.takeDamage(3);
	std::cout << std::endl;
	a.beRepaired(20);
	b.beRepaired(20);
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << std::endl;
	std::cout << CYAN << "\t~~~Start the game!~~~" << RESET << std::endl;
	std::cout << std::endl;

	zombie_game();

	std::cout << std::endl;
	std::cout << CYAN << "\t~~~End of the game!~~~" << RESET << std::endl;
	std::cout << std::endl;

	return (0);
}