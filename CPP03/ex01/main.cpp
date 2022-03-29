/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 18:25:10 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	zombie_game(void)
{
	ClapTrap	a;
	ClapTrap	b("Zombie");
	
	std::cout << std::endl;

	ScavTrap	e;
	ScavTrap	f("Sea");

	std::cout << std::endl;

	e.guardGate();
	f.guardGate();
	std::cout << std::endl;
	b.attack("tree");
	f.attack("tree");
	std::cout << std::endl;
	b.takeDamage(3);
	f.takeDamage(3);
	std::cout << std::endl;
	b.beRepaired(20);
	f.beRepaired(20);
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