/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/03 21:01:14 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "Phonebook.hpp"

/*
** Constructor
*/

Contacts::Contacts(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";	
}

/*
** Getters
*/

std::string	Contacts::get_first_name(void)
{
	return this->first_name;
}

std::string	Contacts::get_last_name(void)
{
	return this->last_name;
}

std::string	Contacts::get_nickname(void)
{
	return this->nickname;
}

std::string	Contacts::get_phone_number(void)
{
	return this->phone_number;
}

std::string	Contacts::get_darkest_secret(void)
{
	return this->darkest_secret;
}

/*
** Additional
*/

void	Contacts::check_end(void)
{
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
	{
		std::cout << "~Good Bye!~" << std::endl;
        exit(0);
	}
}

/*
** Setters
*/

void	Contacts::set_first_name(void)
{
	std::cout << "Enter the first name" << std::endl;
	std::getline(std::cin, Contacts::first_name);
	check_end();
}

void	Contacts::set_last_name(void)
{
	std::cout << "Enter the last name" << std::endl;
	std::getline(std::cin, Contacts::last_name);
	check_end();
}

void	Contacts::set_nickname(void)
{
	std::cout << "Enter the nickname" << std::endl;
	std::getline(std::cin, Contacts::nickname);
	check_end();
}

void	Contacts::set_phone_number(void)
{
	std::cout << "Enter the phone number" << std::endl;
	std::getline(std::cin, Contacts::phone_number);
	check_end();
}

void	Contacts::set_darkest_secret(void)
{
	std::cout << "Enter the darkest secret" << std::endl;
	std::getline(std::cin, Contacts::darkest_secret);
	check_end();
}
