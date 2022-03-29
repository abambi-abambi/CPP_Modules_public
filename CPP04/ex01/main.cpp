/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/11 11:48:02 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void )
{

/*
** Array of animals
*/
	const int	total = 4;
	Animal		*animals[total];
	int			i;

	i = -1;
	while (++i < total)
	{
		if (i < total / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}

	i = -1;
	while (++i < total)
		std::cout << animals[i]->getType() << std::endl;
	std::cout << std::endl;

/*
** Delete
*/

	i = -1;
	while (++i < total)
	{
		delete animals[i];
		std::cout << std::endl;
	}

/*
** Deep-copy
*/
	const Animal* j = new Dog();
	std::cout << std::endl;

	const Animal* k = new Cat();
	std::cout << std::endl;

	const Animal* j2 = new Dog((const Dog&)*j);
	std::cout << std::endl;

	const Animal* k2 = new Cat((const Cat&)*k);
	std::cout << std::endl;

/*
** Brain-info
*/
	((Cat*)k)->getBrain();
	((Cat*)k2)->getBrain();
	((Dog*)j)->getBrain();
	((Dog*)j2)->getBrain();
	std::cout << std::endl;

/*
** Delete
*/

	delete j;
	std::cout << std::endl;

	delete k;
	std::cout << std::endl;

	delete j2;
	std::cout << std::endl;

	delete k2;
	std::cout << std::endl;

/* ~~~~~~~~~~~~~~~~~~~~~ */
//Check-list sample:

	// Dog	basic;
	// {
	// Dog tmp = basic;
	// }
	// std::cout << std::endl;
/* ~~~~~~~~~~~~~~~~~~~~~ */

}
