/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/05 16:00:13 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	zombie_stacklife(void)
{
	Zombie	beast_1("First");
	beast_1.announce();
}

void	zombie_heaplife(void)
{
	Zombie	*beast_2 = newZombie("Second");
	beast_2->announce();
	delete beast_2;
}

void	zombie_stacklife_from_randomChump()
{
	randomChump("Third");
}

int main(void)
{
	zombie_stacklife();
	zombie_heaplife();
	zombie_stacklife_from_randomChump();
}
