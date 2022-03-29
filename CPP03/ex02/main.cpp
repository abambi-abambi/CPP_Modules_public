/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 18:11:43 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	zombie_game(void)
{
	ClapTrap	b("Zombie");
	
	std::cout << std::endl;

	ScavTrap	f("Sea");

	std::cout << std::endl;

	FragTrap	h;
	FragTrap	i("Sky");

	std::cout << std::endl;
	i.highFivesGuys();
	std::cout << std::endl;
	b.attack("tree");
	f.attack("tree");
	i.attack("tree");
	std::cout << std::endl;
	b.takeDamage(3);
	f.takeDamage(3);
	i.takeDamage(3);
	std::cout << std::endl;
	b.beRepaired(20);
	f.beRepaired(20);
	i.beRepaired(20);
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