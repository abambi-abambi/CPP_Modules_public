/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/03 20:47:32 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>//
#include <stdlib.h>
#include "Contacts.hpp"

#define INDEX_MAX		7
#define	CELL_WIDTH		10

class	Phonebook
{
	private:
		int			index;
		int			length;
		Contacts	contact[8];
		void		print_table_head(void);
		void		print_table_index(int i);
		void		print_table_data(std::string str);
		void		show_contacts(void);
		void		show_one_contact(int index);
		std::string	crop_text(std::string str);
	public:
		Phonebook(void);
		void		add_contact(void);
		void		search_contact(void);
};

#endif