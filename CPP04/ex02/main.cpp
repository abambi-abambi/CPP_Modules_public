/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/11 12:05:27 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void )
{
	const int	total = 4;
	Animal	*animals[total];
	int		i;

	i = -1;
	while (++i < total)
	{
		if (i < total / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl << std::endl;
	}

	i = -1;
	while (++i < total)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	// const Animal* k = new Animal();
	std::cout << std::endl;

	const Animal* l = new Dog();
	std::cout << std::endl;

	const Animal* m = new Cat();
	std::cout << std::endl;

	delete l;
	std::cout << std::endl;

	delete m;
	std::cout << std::endl;
}
