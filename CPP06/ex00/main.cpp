/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/14 16:43:20 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int	main(int ac, char const **av)
{
	Data	data;
	if (ac != 2)
	{
		std::cout << "Error: wrong number of args. Need <char / int / float or double>" << std::endl;
		return (1);
	}
	data = my_parser(av[1]);
	data = converter(data);
	std::cout << data << std::endl;
	return (0);
}
