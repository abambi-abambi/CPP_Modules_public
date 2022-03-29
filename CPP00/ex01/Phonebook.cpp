/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/03 21:37:40 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	index = 0;
	length = 0;
}

void    Phonebook::add_contact()
{
	if (this->index > INDEX_MAX)
		this->index = 0;
    contact[index].set_first_name();
	contact[index].set_last_name();
	contact[index].set_nickname();
	contact[index].set_phone_number();
	contact[index].set_darkest_secret();
    std::cout << ">>> Input is completed! <<<" << std::endl;
	std::cout << "\t***" << std::endl;
    this->index++;
	if (this->length < INDEX_MAX + 1)
		this->length++;
}

void	Phonebook::search_contact(void)
{
	std::string	str;
	int		index;

	Phonebook::show_contacts();
	if (Phonebook::length == 0)
	{
		std::cout << std::endl;
		std::cout << "--- The Phonebook is empty ---" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << "Which index? " << std::endl;
	if (std::cin.eof())
		return ;
	std::cin.clear();
	std::getline(std::cin, str);
	index = atoi(str.c_str());
	if (std::cin.eof() || std::cin.bad() || std::cin.fail() || \
		index < 0 || index > Phonebook::length - 1)
	{
		std::cout << "Error: invalid index" << std::endl;
		std::cout << "~Good Bye!~" << std::endl;
        exit(0);
	}
	else
		Phonebook::show_one_contact(index);
}

std::string	Phonebook::crop_text(std::string str)
{
	if (str.size() > CELL_WIDTH)
		return (str.substr(0, CELL_WIDTH - 1) + ".");
	else
		return (str);
}

void    Phonebook::show_contacts(void)
{
	int	i;

	print_table_head();
	if (Phonebook::length == 0)
		return ;
	i = 0;
	while (i < Phonebook::length)
	{
		print_table_index(i);
		print_table_data(Phonebook::crop_text(contact[i].get_first_name()));
		print_table_data(Phonebook::crop_text(contact[i].get_last_name()));
		print_table_data(Phonebook::crop_text(contact[i].get_nickname()));
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << std::endl;
}

void    Phonebook::show_one_contact(int index)
{
	std::cout << "\t***" << std::endl;
	std::cout << "INDEX:\t\t " << index << std::endl;
   	std::cout << "FIRST NAME:\t " << contact[index].get_first_name() << std::endl;
   	std::cout << "LAST NAME:\t " << contact[index].get_last_name() << std::endl;
	std::cout << "NICKNAME:\t " << contact[index].get_nickname() << std::endl;
   	std::cout << "PHONE NUMBER:\t " << contact[index].get_phone_number() << std::endl;
	std::cout << "DARKEST SECRET:\t " << contact[index].get_darkest_secret() << std::endl;
	std::cout << "\t***" << std::endl << std::endl;
}

/*
** Print Phonebook table
*/

void	Phonebook::print_table_head(void)
{
	std::cout << std::endl;
	std::cout << "\t\tPhonebook content:" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name| nick name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;	
}

void	Phonebook::print_table_index(int i)
{
	int	tmp;
	int	size;
	int	copy;

	copy = i;
	size = 1;
	while ((copy / 10) != 0)
		size++;
	std::cout << "|";
	tmp = CELL_WIDTH - size;
	if (tmp)
		while (tmp--)
			std::cout << " ";
	std::cout << i;
}

void	Phonebook::print_table_data(std::string str)
{
	int	tmp;

	std::cout << "|";
	tmp = CELL_WIDTH - str.length();
	if (tmp)
		while (tmp--)
			std::cout << " ";
	std::cout << str;
}
