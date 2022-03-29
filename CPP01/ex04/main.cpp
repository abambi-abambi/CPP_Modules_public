/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/06 17:26:55 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error_exit(std::string msg)
{
	std::cout << msg << std::endl;
	return (-1);
}

void	start_my_replace(std::ifstream &file, std::ofstream &replace_file, \
			std::string s1, std::string s2)
{
	std::string	line;
	int			i;

	while (1)
	{
		if (!file)
			break ;
		std::getline(file, line);
		i = 0;
		while (1)
		{
			i = line.find(s1, i);
			if (i >= 0)
			{
				line = line.insert(i, s2).erase(i + s2.length(), s1.length());
				i += s2.length();
			}
			else
			{
				if (!file.eof())
					replace_file << line << std::endl;
				else
					replace_file << line;
				break ;
			}
		}
	}
}

int	main(int ac, char **av)
{
	std::string	s1;
	std::string	s2;
	std::string	new_file;

	if (ac != 4)
		return (error_exit("Error: wrong number of arguments"));
	std::ifstream	file(av[1]);
	if (!file.is_open())
		return (error_exit("Error: unable to open the file"));
	s1 = av[2];
	s2 = av[3];
	if (file.peek() == EOF || s1.empty() || s2.empty())
		return (error_exit("Error: empty argument is invalid"));
	new_file = av[1] + std::string(".replace");
	std::ofstream	replace_file(new_file.c_str());
	if (!replace_file.is_open())
		return (error_exit("Error: unable to create the new file"));
	start_my_replace(file, replace_file, s1, s2);
	return (0);
}
