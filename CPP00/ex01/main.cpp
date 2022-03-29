/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/03 21:45:42 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "Phonebook.hpp"

static void	phone_loop(Phonebook phonebook)
{
	std::string	cmd;

	while (1)
	{
		std::cout << "Input Command (EXIT, ADD, SEARCH):\t";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			phonebook.add_contact();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (cmd == "EXIT" || std::cin.eof() || std::cin.bad())
		{
			std::cout << std::endl;
			std::cout << "~Good Bye!~" << std::endl;
			break ;
		}
		else
			std::cout << cmd << " is a wrong command. Input next: ADD / SEARCH / EXIT\t" << std::endl << std::endl;
	}
}

int main(int ac, char **av)
{
	Phonebook	phonebook;

    (void)av;
    if (ac > 1)
	{
        std::cout << "Error input. Print this:\n./phonebook" << std::endl;
        return (1);
    }
	std::cout << std::endl;
	std::cout << "~~~OLD-STYLED PHONEBOOK~~~" << std::endl;
	std::cout << std::endl;
	phone_loop(phonebook);
	return (0);
}
