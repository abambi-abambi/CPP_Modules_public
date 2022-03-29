/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/05 22:46:06 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	test_zombie_name(Zombie *zombiehord, int N)
{
	int	i;

	i = -1;
	while (++i < N)
		zombiehord[i].announce();
}

void	test_name_change(Zombie *zombiehord)
{
	zombiehord->set_name("Second");
	zombiehord[1].set_name("Third");
	zombiehord->announce();
	zombiehord[1].announce();
}

int main(void)
{
	int	N;

	N = 7;
	Zombie *zombiehord = zombieHorde(N, "First");
	test_zombie_name(zombiehord, N);
	test_name_change(zombiehord);
	delete[] zombiehord;
}
