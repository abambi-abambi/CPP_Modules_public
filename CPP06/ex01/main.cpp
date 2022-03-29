/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/14 20:14:22 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t	result;

	result = reinterpret_cast<uintptr_t>(ptr);
	return (result);
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data		*ptr;
	uintptr_t	raw;

	ptr = new Data();
	ptr->c = 'a';
	ptr->n = 0;
	ptr->str = "Hello";

	std::cout << ptr << " " << ptr->c << " " << ptr->n << " " << ptr->str << std::endl;
	raw = serialize(ptr);
	std::cout << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << ptr << " " << ptr->c << " " << ptr->n << " " << ptr->str << std::endl;
	delete ptr;
	return (0);
}
